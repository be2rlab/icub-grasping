%% writeen by Wennie
% Computes the minimum distance from an arbitray point to one space line segment. Code
% Usage: Input the x,y,z coordinates of a given point, and start and end x,y,z coordinates for one line segment. 
% p is [x,y,z] coordinates of the given point, and p1, p2 are [x,y,z] coordinates of the line segment.
% Output: scalar minimum distance from the given arbitray point to the space line segment.
%  Example:
%   P  = [0 1 0];
% 	P1 = [0 0 0];     P2 = [1 0 0];
% 	dist = DistFromPoint2Segment(P, P1, P2)
%   dist =
%
%    1
%%
function distance = point_to_line(p, p1, p2)
u = p - p1;
v = p2 - p1;
w = p - p2;
r=dot(u,v)/(norm(v)*norm(v));
if r<=0
    distance=norm(u);
elseif r>=1
    distance=norm(w);
else
    distance=norm(u-v*r);    
end
end