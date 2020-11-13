l1=0.25; l2=0.25;
%manipulator part

q_low_lim = [-1.65806 0 0.0959931 ] + pi; % ограничение по вращению сочленений(нижнее)
q_up_lim = [ 0.1872665 2.80649 1.85005 ] + pi; % -//- (верхнее)


% Перевод в градусы
qd_low_lim = [ rad2deg(q_low_lim(1)) rad2deg(q_low_lim(2)) rad2deg(q_low_lim(3)) ];
qd_up_lim = [ rad2deg(q_up_lim(1)) rad2deg(q_up_lim(2)) rad2deg(q_up_lim(3)) ];



% %Инициализация ROS, получение данных о конфигурации робота
% rosinit 
% sub = rossubscriber('/matrixH');
% msg2 = receive(sub);
% B = [msg2.Data(1) msg2.Data(2) msg2.Data(3) msg2.Data(4);
%     msg2.Data(5) msg2.Data(6) msg2.Data(7) msg2.Data(8);
%     msg2.Data(9) msg2.Data(10) msg2.Data(11) msg2.Data(12);
%     msg2.Data(13) msg2.Data(14) msg2.Data(15) msg2.Data(16)];

%Создание робота в Corke Robotic Toolbox

% L1 = Link('revolute','d', 0, 'a', 32/1000, 'alpha', pi/2,'qlim',[deg2rad(-22) deg2rad(84)],'offset',0);
% L2 = Link('revolute','d',-5.5/1000, 'a', 0, 'alpha', pi/2,'qlim',[deg2rad(-39) deg2rad(39)],'offset',-pi/2);
% L3 = Link('revolute','d', -143.3/1000, 'a', -23.3647/1000, 'alpha', pi/2,'qlim',[deg2rad(-59) deg2rad(59)],'offset',deg2rad(-105));
% L4 = Link('revolute','d', -107.74/1000, 'a', 0, 'alpha', pi/2,'qlim',[deg2rad(5) deg2rad(-95)],'offset',-pi/2);
% L5 = Link('revolute','d',0, 'a', 0, 'alpha', -pi/2,'qlim',[deg2rad(0) deg2rad(160.8)],'offset',-pi/2);
% L6 = Link('revolute','d', -152.28/1000, 'a', -15/1000, 'alpha', -pi/2,'qlim',[deg2rad(-37) deg2rad(100)],'offset',deg2rad(-105));
% L7 = Link('revolute','d', 0, 'a', 15/1000, 'alpha', pi/2,'qlim',[deg2rad(5.5) deg2rad(106)],'offset',deg2rad(60));
% L8 = Link('revolute','d',-141.3/1000, 'a', 0, 'alpha', pi/2,'qlim',[deg2rad(-50) deg2rad(50)],'offset',-pi/2);
% L9 = Link('revolute','d', 0, 'a', 0, 'alpha', pi/2,'qlim',[deg2rad(10) deg2rad(-65)],'offset',pi/2);
% L10 = Link('revolute','d', 25.98/1000, 'a', 62.5/1000, 'alpha', 0,'qlim',[deg2rad(-25) deg2rad(25)],'offset',2*pi);
% rbt2 = SerialLink([L1,L2,L3,L4,L5,L6,L7,L8,L9,L10]);
% B = [0 -1 0 0; 0 0 -1 0; 1 0 0 0 ; 0 0 0 1];
% rbt2.base = B;
% q1 = 0;
% q2 = 0;
% q3 = 0;
% q4 = 0;
% q5 = 0;
% q6 = 0;
% q7 = 0;
% q8 = 0;
% q9 = 0;
% q10 = 0;
% % rbt2.plot([0 -pi/2 deg2rad(-105) -pi/2 -pi/2 deg2rad(-105) 0 -pi/2 pi/2 2*pi])
% rbt2.plot([q1 q2 q3 q4 q5 q6 q7 q8 q9 10]) 
% % 4 - плечо вперед-назад
% % 5 - плечо вправо-влево
% % 6 - плечо вокруг оси
% % 7 - локоть





L1 = Link('revolute','d', 0, 'a', 0, 'alpha', pi/2);
L2 = Link('revolute','d',0, 'a', l1, 'alpha', pi/2);
L3 = Link('revolute','d', 0, 'a', l2, 'alpha', 0);
win=transl([0.3 0.3 0.3]);
L1.qlim=[rad2deg(q_low_lim(1)) rad2deg(q_up_lim(1))];
L2.qlim=[rad2deg(q_low_lim(2)) rad2deg(q_up_lim(2))];
L3.qlim=[rad2deg(q_low_lim(3)) rad2deg(q_up_lim(3))];
initial=[0 0 0];

rbt = SerialLink([L1 L2 L3]);
i1=1; i2=1; 
j1 = 0; j2 = 0; j3 = 0; mas=[];
dq=pi/(360/10); tolerance=0.05;  %landings
%Конфигурационное пространство(создание)
for q1=q_low_lim(1):dq:q_up_lim(1)
    j1=j1+1; j2 = 0; j3 = 0;
    for q2=q_low_lim(2):dq:q_up_lim(2)
        j2=j2+1; j3 = 0;
        for q3=q_low_lim(3):dq:q_up_lim(3)
            j3=j3+1;
            rbt = SerialLink([L1,L2,L3]);
%             H=rbt.A([1:1],[q1,q2,q3,q4,q5,q6,q7,q8,q9,q10]);
            H=rbt.A([1:1],[q1,q2,q3]);
            p1=H.t;
%             H=rbt.A([1:2],[q1,q2,q3,q4,q5,q6,q7,q8,q9,q10]);
            H=rbt.A([1:2],[q1,q2,q3]);
            p2=H.t;
%             H=rbt.A([1:3],[q1,q2,q3,q4,q5,q6,q7,q8,q9,q10]);
            H=rbt.A([1:3],[q1,q2,q3]);
            p3=H.t;
    %заполнить матрицу D расстояниями до каждой из точек матрицы А
            for i=1:1:length(x1)
                D3(i)=point_to_line([A1(i,1),A1(i,2),A1(i,3)],p1.',p2.');
                D4(i)=point_to_line([A1(i,1),A1(i,2),A1(i,3)],p2.',p3.');
            end
    %Найти минимальное расстояние(минимальный элемент матрицы D)
    M3=min(D3);
    M4=min(D4);
    %Если минимальное расстояние меньше допустимой константы tolerance
            if (M3 < tolerance)
    %Сохраняем текущую конфигурацию (q1,q2,q3)
    
                Q(i1,1)=q1*(180/pi); Qa(i2,1)=Q(i1,1);
                Q(i1,2)=q2*(180/pi); Qa(i2,2)=Q(i1,2);
                Q(i1,3)=q3*(180/pi); Qa(i2,3)=Q(i1,3);  Qm(j1,j2,j3)=1; mas=[mas; i2 j1 j2 j3];
                 i1=i1+1; i2=i2+1;
            elseif (M4 < tolerance)
                Q(i1,1)=q1*(180/pi); Qa(i2,1)=Q(i1,1);
                Q(i1,2)=q2*(180/pi); Qa(i2,2)=Q(i1,2);
                Q(i1,3)=q3*(180/pi); Qa(i2,3)=Q(i1,3);  Qm(j1,j2,j3)=1; mas=[mas; i2 j1 j2 j3];
                i1=i1+1; i2=i2+1;
            else Qa(i2,1)=0;
                 Qa(i2,2)=0;
                 Qa(i2,3)=0;
                 Qm(j1,j2,j3)=0; mas=[mas; i2 j1 j2 j3];
                 i2=i2+1;
            end 
        end
    end
end
i1=1; i2=1;

% %  Конфигурационное пространство(изображение)
% figure(2)
% scatter3(Q(:,1),Q(:,2),Q(:,3),'r.'),grid on, hold on
% xlabel('q1')
% ylabel('q2')
% zlabel('q3')
% xlim([0 360])
% ylim([0 360])
% zlim([0 360])

gl=rbt.ikcon(win, initial); %Решение ОЗК для цели

%Формирование параллелепипедов для описания запретных зон
iii=1;
L = bwlabeln(Qm);
km=max(max(max(L)));
for i = 1:1:km
    [ix,iy,iz]=findND(L==i);  
        for i1=1:length(ix)
            for kk=1:length(mas(:,1))
                if ix(i1) == mas(kk,2) && iy(i1) == mas(kk,3) && iz(i1) == mas(kk,4)
                    ii=mas(kk,1);
                    Qc(iii,1) = Qa(ii,1); Qc(iii,2) = Qa(ii,2); Qc(iii,3) = Qa(ii,3);
                    iii=iii+1;
                end
            end
        end
    xmin=min(Qc(:,1)); ymin=min(Qc(:,2)); zmin=min(Qc(:,3));
    xmax=max(Qc(:,1)); ymax=max(Qc(:,2)); zmax=max(Qc(:,3));
    Qc=[]; iii=1;
    obs(i,:,:)=[xmin ymin zmin; xmax ymax zmax].';
%     figure(2)
%     scatter3(obs(i,1,1),obs(i,2,1),obs(i,3,1),'g*')  %границы параллелепипедов
%     scatter3(obs(i,1,2),obs(i,2,2),obs(i,3,2),'g*')
end
% hold off


% %RRT_star
% 
% figure(3)
% scatter3(Q(:,1),Q(:,2),Q(:,3),'r.'),grid on, hold on
% xlabel('q1')
% ylabel('q2')
% zlabel('q3')
% xlim([0 360])
% ylim([0 360])
% zlim([0 360])
% 
% 
% start.cost = 0;
% start.parent = 0;
% start.coord = [50 80 80];
% goal.coord = [340 300 180];
% goal.cost = 0;
% goal.parent = 0;
% 
% q_new=start.coord;
% 
% % d=0.3; l=0.1; R=0.15; y0=0.2; z0=0.3; x0=d+l/2; l1=0.25; l2=0.25;
% % theta=atan(z0/y0); yy=R*cos(theta); zz=R*sin(theta); tolerance=10;
% % k=-1:0.005:1;
% x_max = 360;
% y_max = 360;
% z_max = 360;
% 
% EPS = 40;
% numNodes = 1000;
% 
% nodes(1) = start;
% 
% figure(3)
% plot3(start.coord(1,1),start.coord(1,2),start.coord(1,3),'b*')
% plot3(goal.coord(1,1),goal.coord(1,2),goal.coord(1,3),'b*')
% for i = 1:1:numNodes
%         % Формируем случайную точку
%     q_rand = [rand(1)*x_max rand(1)*y_max rand(1)*z_max];
%     figure(3)
%     plot3(q_rand(1), q_rand(2), q_rand(3), 'x', 'Color',  [0 0.4470 0.7410])
% %     % Если точка попала в цель, то выход из цикла
% %     % Break if goal node is already reached
%     for j = 1:1:length(nodes) 
%         if nodes(j).coord == goal.coord
%             break
%         end
%     end
%     [q_new,nodes]=RRT_star_c_space(start.coord,goal.coord,q_rand,EPS, nodes,obs);
% end
% 
% D = [];
% for j = 1:1:length(nodes)
%     tmpdist = dist_3d(nodes(j).coord, goal.coord);
%     D = [D tmpdist];
% end
% 
% % Search backwards from goal to start to find the optimal least cost path
% [val, idx] = min(D);
% q_final = nodes(idx);
% goal.parent = idx;
% q_end = goal;
% nodes = [nodes goal];
% tr=1;
% while q_end.parent ~= 0
%     startt = q_end.parent;
%     traj(tr,1) = nodes(startt).coord(1);
%     traj(tr,2) = nodes(startt).coord(2);
%     traj(tr,3) = nodes(startt).coord(3);
%     tr=tr+1;
%     figure(3)
%     line([q_end.coord(1), nodes(startt).coord(1)], [q_end.coord(2), nodes(startt).coord(2)], [q_end.coord(3), nodes(startt).coord(3)], 'Color', 'r', 'LineWidth', 4);
% %     hold on
%     q_end = nodes(startt);
% end
%  hold off
% figure(4)
% plot3(traj(:,1),traj(:,2),traj(:,3)),grid on
% xlabel('x')
% ylabel('y')
% zlabel('z')

%Bi_RRT_star


figure(5)
scatter3(Q(:,1),Q(:,2),Q(:,3),'r.'),grid on, hold on
xlabel('q1')
ylabel('q2')
zlabel('q3')
xlim([0 360])
ylim([0 360])
zlim([0 360])

start.cost = 0;
start.parent = 0;
start.coord = [250 230 250];
goal.coord = [50 300 250];
goal.cost = 0;
goal.parent = 0;

EPS = 40;
numNodes = 1000;


x_max = 360;
y_max = 360;
z_max = 360;

q_new1=start.coord;
q_new2=goal.coord;
nodes1(1) = start;
nodes2(1) = goal;

figure(5)
plot3(start.coord(1,1),start.coord(1,2),start.coord(1,3),'g*'),grid on
plot3(goal.coord(1,1),goal.coord(1,2),goal.coord(1,3),'g*')

for i = 1:1:numNodes
    
    % Формируем случайную точку
    q_rand = [rand(1)*x_max rand(1)*y_max rand(1)*z_max];
    figure(5)
    plot3(q_rand(1), q_rand(2), q_rand(3), 'x', 'Color',  [0 0.4470 0.7410])
    
    
%     % Если точка попала в цель, то выход из цикла
%     % Break if goal node is already reached
%     for j = 1:1:length(nodes)
%         if nodes(j).coord == q_goal.coord
%             break
%         end
%     end
        if i/2==round(i/2)
            [q_new1,nodes1]=RRT_star_c_space(start.coord,goal.coord,q_rand,EPS, nodes1,obs);
        else [q_new2,nodes2]=RRT_star_c_space(goal.coord,start.coord, q_rand, EPS, nodes2,obs);
        end
        for j1=1:1:length(nodes1)
            for j2=1:1:length(nodes2)
                if dist_3d(nodes1(j1).coord,nodes2(j2).coord) <= EPS && isCollision(nodes1(j1).coord,nodes2(j2).coord)
                    k1=1;
                    figure(5)
                    line([nodes1(j1).coord(1,1), nodes2(j2).coord(1,1)], [nodes1(j1).coord(1,2),nodes2(j2).coord(1,2)], [nodes1(j1).coord(1,3),nodes2(j2).coord(1,3)], 'Color', 'k', 'LineWidth', 2);
                    drawnow
%                     hold on
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

tr1=1;
% Search backwards from goal to start to find the optimal least cost path
[val, idx] = min(D);
q_final = nodes1(idx);
goal.parent = idx;
goal.coord = nodes2(j2).coord;
q_end = goal;
nodes1 = [nodes1 goal];
while q_end.parent ~= 0
    startt = q_end.parent;
    traj1(tr1,1) = nodes1(startt).coord(1);
    traj1(tr1,2) = nodes1(startt).coord(2);
    traj1(tr1,3) = nodes1(startt).coord(3);
    tr1=tr1+1;
    figure(5)
    line([q_end.coord(1), nodes1(startt).coord(1)], [q_end.coord(2), nodes1(startt).coord(2)], [q_end.coord(3), nodes1(startt).coord(3)], 'Color', 'r', 'LineWidth', 4);
%     hold on
    q_end = nodes1(startt);
end

D = [];
for j = 1:1:length(nodes2)
    tmpdist = dist_3d(nodes2(j).coord, nodes1(j1).coord);
    D = [D tmpdist];
end
tr2=1;
% Search backwards from goal to start to find the optimal least cost path
[val, idx] = min(D);
q_final = nodes2(idx);
goal.parent = idx;
goal.coord = nodes1(j1).coord;
q_end = goal;
nodes2 = [nodes2 goal];
while q_end.parent ~= 0
    startt = q_end.parent;
    traj2(tr2,1) = nodes2(startt).coord(1);
    traj2(tr2,2) = nodes2(startt).coord(2);
    traj2(tr2,3) = nodes2(startt).coord(3);
    tr2=tr2+1;
    figure(5)
    line([q_end.coord(1), nodes2(startt).coord(1)], [q_end.coord(2), nodes2(startt).coord(2)], [q_end.coord(3), nodes2(startt).coord(3)], 'Color', 'r', 'LineWidth', 4);
%     hold on
    q_end = nodes2(startt);
end

N=length(traj2(:,1));
for i=1:N
    traj3(i,1)=traj2(N-(i-1),1);
    traj3(i,2)=traj2(N-(i-1),2);
    traj3(i,3)=traj2(N-(i-1),3);
end

N=length(traj1(:,1));
for i=1:N
    traj4(i,1)=traj1(N-(i-1),1);
    traj4(i,2)=traj1(N-(i-1),2);
    traj4(i,3)=traj1(N-(i-1),3);
end

traj_f3=[traj4; traj2];

figure(5)
traj_f=[traj1; traj3];
scatter3(traj_f(:,1),traj_f(:,2),traj_f(:,3),'g*'),grid on
xlabel('x')
ylabel('y')
zlabel('z')

traj_f2=[traj1; traj2];

% Inteprolation using Parametric cubic spline 
% Given points 
P = [30 0 0.2035  ;
     0 0 0.0357 ;
     30 60 0.4717 ; 
     30 0 0.1038 ;
     30 30 0.4606] ;
x = traj_f3(:,1) ; y = traj_f3(:,2) ; z = traj_f3(:,3) ;
% Get the arc lengths of the curve 
n = length(x) ;
L = zeros(n,1) ;
for i=2:n     
    arc_length = sqrt((x(i)-x(i-1))^2+(y(i)-y(i-1))^2+(z(i)-z(i-1))^2);     
    L(i) = L(i-1) + arc_length; 
end
% Normalize the arc lengths
L=L./L(n);
% do the spline 
x_t = spline(L,x) ;
y_t = spline(L,y) ;
z_t = spline(L,z) ;
% for interpolation 
tt = linspace(0,1,500) ;
xi = ppval(x_t,tt) ;
yi = ppval(y_t,tt) ;
zi = ppval(z_t,tt) ;
figure(6)
plot3(x,y,z,'.-r') ;
hold on
plot3(xi,yi,zi,'.b') ;
legend('Given points' , 'interpolated') ;


% [pub,msg] = rospublisher('joint1', 'trajectory_msgs/JointTrajectoryPoint');
% for rr=1:1:length(xi)
% msg.Positions = [xi(rr) yi(rr) zi(rr)];
% send(pub,msg);
%  pause(0.2);
% end
%  rosshutdown