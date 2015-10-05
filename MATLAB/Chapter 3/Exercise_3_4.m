clear all;clc;

% 1.
% Define a vector x.
x = [2 1 3 7 9 4 6];

% Calculating the Euclidean length ourselves gives us:
y = sqrt(sum(x.^2))

% Matlab also provides its own function to calculate Euclidean length:
answer1 = norm(x);


% 2.a
% Define vectors x and y.
x = [3 2 1];
y = [1 2 3];
answer2a = acosd((x.'*y)/(norm(x)*norm(y)));

x = 1:5;
y = 6:10;
answer2b = acosd((x.'*y)/(norm(x)*norm(y)));

clear x y;