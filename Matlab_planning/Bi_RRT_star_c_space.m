clc, clear all, close all
start.cost = 0;
start.parent = 0;
start.coord = [0 0 0];
goal.coord = [340 300 180];
goal.cost = 0;
goal.parent = 0;

q_new1=start.coord;
q_new2=goal.coord;

d=0.3; l=0.1; R=0.15; y0=0.2; z0=0.3; x0=d+l/2; l1=0.25; l2=0.25;
theta=atan(z0/y0); yy=R*cos(theta); zz=R*sin(theta); tolerance=10;
k=-1:0.005:1;
x_max = 360;
y_max = 360;
z_max = 360;

EPS = 40;
numNodes = 3000;

nodes1(1) = start;
nodes2(1) = goal;


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

figure(1)
plot3(start.coord(1,1),start.coord(1,2),start.coord(1,3),'r*'),grid on, hold on
plot3(goal.coord(1,1),goal.coord(1,2),goal.coord(1,3),'r*')
scatter3((x1+1)*180,(y1+1)*180,(z1+1)*180,'b.')
for i = 1:1:numNodes
    
    % Формируем случайную точку
    q_rand = [rand(1)*x_max rand(1)*y_max rand(1)*z_max];
    plot3(q_rand(1), q_rand(2), q_rand(3), 'x', 'Color',  [0 0.4470 0.7410])
    
    
%     % Если точка попала в цель, то выход из цикла
%     % Break if goal node is already reached
%     for j = 1:1:length(nodes)
%         if nodes(j).coord == q_goal.coord
%             break
%         end
%     end
        if i/2==round(i/2)
            [q_new1,nodes1]=RRT_star(start.coord,goal.coord,q_rand,EPS, nodes1);
        else [q_new2,nodes2]=RRT_star(goal.coord,start.coord, q_rand, EPS, nodes2);
        end
        for j1=1:1:length(nodes1)
            for j2=1:1:length(nodes2)
                if dist_3d(nodes1(j1).coord,nodes2(j2).coord) <= EPS && isCollision(nodes1(j1).coord,nodes2(j2).coord)
%     if dist_3d(q_new1,q_new2) <= EPS && isCollision(q_new1,q_new2)
                    k1=1;
                    line([nodes1(j1).coord(1,1), nodes2(j2).coord(1,1)], [nodes1(j1).coord(1,2),nodes2(j2).coord(1,2)], [nodes1(j1).coord(1,3),nodes2(j2).coord(1,3)], 'Color', 'k', 'LineWidth', 2);
                    drawnow
                    hold on
                    break
                else k1=0;
                end
            end
                if k1 == 1
            break
        end    
        end
        if k1 == 1
            break
        end
end
ln2=length(nodes2);
ln1=length(nodes1);

D = [];
for j = 1:1:length(nodes1)
    tmpdist = dist_3d(nodes1(j).coord, nodes2(j2).coord);
    D = [D tmpdist];
end

% Search backwards from goal to start to find the optimal least cost path
[val, idx] = min(D);
q_final = nodes1(idx);
goal.parent = idx;
goal.coord = nodes2(j2).coord;
q_end = goal;
nodes1 = [nodes1 goal];
while q_end.parent ~= 0
    start = q_end.parent;
    line([q_end.coord(1), nodes1(start).coord(1)], [q_end.coord(2), nodes1(start).coord(2)], [q_end.coord(3), nodes1(start).coord(3)], 'Color', 'r', 'LineWidth', 4);
    hold on
    q_end = nodes1(start);
end

D = [];
for j = 1:1:length(nodes2)
    tmpdist = dist_3d(nodes2(j).coord, nodes1(j1).coord);
    D = [D tmpdist];
end

% Search backwards from goal to start to find the optimal least cost path
[val, idx] = min(D);
q_final = nodes2(idx);
goal.parent = idx;
goal.coord = nodes1(j1).coord;
q_end = goal;
nodes2 = [nodes2 goal];
while q_end.parent ~= 0
    start = q_end.parent;
    line([q_end.coord(1), nodes2(start).coord(1)], [q_end.coord(2), nodes2(start).coord(2)], [q_end.coord(3), nodes2(start).coord(3)], 'Color', 'r', 'LineWidth', 4);
    hold on
    q_end = nodes2(start);
end