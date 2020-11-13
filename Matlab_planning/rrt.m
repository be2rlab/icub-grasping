clc,clear all, close all

d=0.3; l=0.1; R=0.15; y0=0.2; z0=0.3; x0=d+l/2; l1=0.25; l2=0.25;
theta=atan(z0/y0); yy=R*cos(theta); zz=R*sin(theta); tolerance=10;
k=-1:0.005:1;
% Зануляем всё пространство
for i=1:1:length(k)
    for j=1:1:length(k)
        for m=1:1:length(k)
            A(i,j,m)=0;
        end
    end
end
%Обозначаем все точки стенки единичками
for z=-0.95:0.005:1
    for y=-0.95:0.005:1
        for x=-0.95:0.005:1
            if(x>=d) && (x<=d+l)
                n=round((1+x)/0.005); p=round((1+y)/0.005); r=round((1+z)/0.005); A(n,p,r)=1; %round - для преобразования в int
            end
        end
    end
end
%Обозначаем дырку в стене ноликами
for z=-0.95:0.005:1
    for y=-0.95:0.005:1
        for x=-0.95:0.005:1
            if(x>=(d)) && (x<=(d+l))
                if(y>=y0-yy) && (y<=y0+yy)
                    if(z>=z0-zz) && (z<=z0+zz)
                    n=round((1+x)/0.005); p=round((1+y)/0.005); r=round((1+z)/0.005); A(n,p,r)=0;
                    end
                end
            end
        end
    end
end
t=1;
for i=1:1:length(k)
    for j=1:1:length(k)
        for m=1:1:length(k)
            if (A(i,j,m)==1)
                x1(t)=(0.005*i-1); y1(t)=(0.005*j-1); z1(t)=(0.005*m-1);
                t=t+1;
                
            end
        end
    end
end
A1(:,1)=x1;
A1(:,2)=y1;
A1(:,3)=z1;

x_max = 360;
y_max = 360;
z_max = 360;

d=0.3; l=0.1; R=0.15; y0=0.2; z0=0.3; x0=d+l/2; l1=0.25; l2=0.25;
theta=atan(z0/y0); yy=R*cos(theta); zz=R*sin(theta);

EPS = 30;
numNodes = 2500;

q_start.coord = [0 0 0];
q_start.cost = 0;
q_start.parent = 0;
q_goal.coord = [340 300 180];
q_goal.cost = 0;

nodes(1) = q_start;
figure(1)
plot3(q_goal.coord(1,1),q_goal.coord(1,2),q_goal.coord(1,3),'r*'),grid on, hold on
 scatter3((x1+1)*180,(y1+1)*180,(z1+1)*180,'b.')
 
for i = 1:1:numNodes
    %Формируем случайную точку
    q_rand = [rand(1)*x_max rand(1)*y_max rand(1)*z_max];
    plot3(q_rand(1), q_rand(2), q_rand(3), 'x', 'Color',  [0 0.4470 0.7410])
    
    %Если точка попала в цель, то выход из цикла
    % Break if goal node is already reached
    for j = 1:1:length(nodes)
        if nodes(j).coord == q_goal.coord
            break
        end
    end
    
    
    %Берём ближайший узел из списка, к которому будет строится граф
    % Pick the closest node from existing list to branch out from
    ndist = [];
    for j = 1:1:length(nodes)
        n = nodes(j);
        tmp = dist_3d(n.coord, q_rand);
        ndist = [ndist tmp];
    end
    [val, idx] = min(ndist);
    q_near = nodes(idx);
    q_new.coord = steer3d(q_rand, q_near.coord, val, EPS);
    if isCollision(q_near.coord,q_new.coord)
    line([q_near.coord(1), q_new.coord(1)], [q_near.coord(2), q_new.coord(2)], [q_near.coord(3), q_new.coord(3)], 'Color', 'k', 'LineWidth', 2);
    drawnow
    hold on
    q_new.cost = dist_3d(q_new.coord, q_near.coord) + q_near.cost;
    
    % Within a radius of r, find all existing nodes
    q_nearest = [];
    r = 50;
    neighbor_count = 1;
    for j = 1:1:length(nodes)
        if  isCollision(nodes(j).coord,q_new.coord) && (dist_3d(nodes(j).coord, q_new.coord)) <= r
            q_nearest(neighbor_count).coord = nodes(j).coord;
            q_nearest(neighbor_count).cost = nodes(j).cost;
            neighbor_count = neighbor_count+1;
        end
    end
    
    % Initialize cost to currently known value
    q_min = q_near;
    C_min = q_new.cost;
    
    % Iterate through all nearest neighbors to find alternate lower
    % cost paths
    
    for k = 1:1:length(q_nearest)
        if isCollision(q_nearest(k).coord,q_new.coord) && q_nearest(k).cost + dist_3d(q_nearest(k).coord, q_new.coord) < C_min
            q_min = q_nearest(k);
            C_min = q_nearest(k).cost + dist_3d(q_nearest(k).coord, q_new.coord);
            line([q_min.coord(1), q_new.coord(1)], [q_min.coord(2), q_new.coord(2)], [q_min.coord(3), q_new.coord(3)], 'Color', 'g');            
            hold on
        end
    end
    
    % Update parent to least cost-from node
    for j = 1:1:length(nodes)
        if nodes(j).coord == q_min.coord
            q_new.parent = j;
        end
    end
    
    % Append to nodes
    nodes = [nodes q_new];
    end
 end
D = [];
for j = 1:1:length(nodes)
    tmpdist = dist_3d(nodes(j).coord, q_goal.coord);
    D = [D tmpdist];
end

% Search backwards from goal to start to find the optimal least cost path
[val, idx] = min(D);
q_final = nodes(idx);
q_goal.parent = idx;
q_end = q_goal;
nodes = [nodes q_goal];
while q_end.parent ~= 0
    start = q_end.parent;
    line([q_end.coord(1), nodes(start).coord(1)], [q_end.coord(2), nodes(start).coord(2)], [q_end.coord(3), nodes(start).coord(3)], 'Color', 'r', 'LineWidth', 4);
    hold on
    q_end = nodes(start);
end
