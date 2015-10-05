clear all;clc;

% Create a vector x with the elements: 
% 1, 1/2, 1/3, 1/4, 1/5 by dividing a vector y by a vector z.

y = linspace(1,1,5);
z = linspace(1,5,5);
ans1 = y./z;

% Create a vector a with the elements:
% 0, 1/2, 2/3, 3/4, 4/5 by dividing a vector b by a vector c.

a = linspace(0,4,5);
b = linspace(1,5,5);
ans2 = a./b

% Create a vector u with the elements: u(n) = (-1)^n/2n-1 for n = 1,2,3..
% Find the sum of the 100-element vector.
u = [];
for index = 1:100
    u(index) = (-1)^index/(2*index-1);
end
ans3 = sum(u)

% Given a vector t, write down the MATLAB expressions that will compute:
% ln(2+t+t^2)
% cos(t)^2 - sin(t)^2
% e^t(1+cos(3t))
% tan-1(t)
t = 1:0.2:2;

ans4a = log(2+t+t.^2)
ans4b = cos(t).^2 - sin(t).^2
% ans4c = exp(t)*(cos(3*t)+1) % Matrix dimensions are both 1x6, so multiplying 
                         % does not work.
ans4d = atan(t)
