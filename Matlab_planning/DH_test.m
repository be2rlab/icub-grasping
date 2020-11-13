L1 = Link('revolute','d', 0, 'a', 32/1000, 'alpha', pi/2,'qlim',[deg2rad(-22) deg2rad(84)],'offset',0);
L2 = Link('revolute','d',-5.5/1000, 'a', 0, 'alpha', pi/2,'qlim',[deg2rad(-39) deg2rad(39)],'offset',-pi/2);
L3 = Link('revolute','d', -143.3/1000, 'a', -23.3647/1000, 'alpha', pi/2,'qlim',[deg2rad(-59) deg2rad(59)],'offset',deg2rad(-105));
L4 = Link('revolute','d', -107.74/1000, 'a', 0, 'alpha', pi/2,'qlim',[deg2rad(5) deg2rad(-95)],'offset',-pi/2);
L5 = Link('revolute','d',0, 'a', 0, 'alpha', -pi/2,'qlim',[deg2rad(0) deg2rad(160.8)],'offset',-pi/2);
L6 = Link('revolute','d', -152.28/1000, 'a', -15/1000, 'alpha', -pi/2,'qlim',[deg2rad(-37) deg2rad(100)],'offset',deg2rad(-105));
L7 = Link('revolute','d', 0, 'a', 15/1000, 'alpha', pi/2,'qlim',[deg2rad(5.5) deg2rad(106)],'offset',deg2rad(60));
L8 = Link('revolute','d',-141.3/1000, 'a', 0, 'alpha', pi/2,'qlim',[deg2rad(-50) deg2rad(50)],'offset',-pi/2);
L9 = Link('revolute','d', 0, 'a', 0, 'alpha', pi/2,'qlim',[deg2rad(10) deg2rad(-65)],'offset',pi/2);
L10 = Link('revolute','d', 25.98/1000, 'a', 62.5/1000, 'alpha', 0,'qlim',[deg2rad(-25) deg2rad(25)],'offset',2*pi);
rbt2 = SerialLink([L1,L2,L3,L4,L5,L6,L7,L8,L9,L10]);
B = [0 -1 0 0; 0 0 -1 0; 1 0 0 0 ; 0 0 0 1];
rbt2.base = B;
q1 = 0;
q2 = 0;
q3 = 0;
q4 = 0;
q5 = 0;
q6 = 0;
q7 = 0;
q8 = 0;
q9 = 0;
q10 = 0;
% rbt2.plot([0 -pi/2 deg2rad(-105) -pi/2 -pi/2 deg2rad(-105) 0 -pi/2 pi/2 2*pi])
rbt2.plot([q1 q2 q3 q4 q5 q6 q7 q8 q9 10]) 
% 4 - плечо вперед-назад
% 5 - плечо вправо-влево
% 6 - плечо вокруг оси
% 7 - локоть