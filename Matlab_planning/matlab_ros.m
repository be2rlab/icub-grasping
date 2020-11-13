rosinit
sub = rossubscriber('/matrixH');
msg2 = receive(sub);
B = [msg2.Data(1) msg2.Data(2) msg2.Data(3) msg2.Data(4);
    msg2.Data(5) msg2.Data(6) msg2.Data(7) msg2.Data(8);
    msg2.Data(9) msg2.Data(10) msg2.Data(11) msg2.Data(12);
    msg2.Data(13) msg2.Data(14) msg2.Data(15) msg2.Data(16)];
rosshutdown
% [pub,msg] = rospublisher('joint1', 'trajectory_msgs/JointTrajectoryPoint');
% for rr=1:1:length(xi)
% msg.Positions = [xi(rr) yi(rr) zi(rr)];
% send(pub,msg);
%  pause(0.2);
% end
% rosshutdown