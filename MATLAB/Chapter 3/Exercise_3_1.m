clear all;clc;

% Create a vector consisting of the even numbers between 21 and 47.

ans1 = 22:2:46


% Let x = [4 5 9 6].
x = [4 5 9 6]

% Subtract 3 from each element
ans2a = x - 3

% Add 11 to the odd-index elements
ans2b = x;
ans2b(1) = ans2b(1) + 11
ans2b(3) = ans2b(3) + 11

% Compute the square root of each element
ans2c = sqrt(x)

% Raise to the power 3 each element
ans2d = x.^3


% Create a vector y with the elements 2 to 16 (even only) and
% a vector z with the elements 9 to -5 (odd only).
y = 2:2:16;
z = 9:-2:-5;


% Given a vector a = [2 1 3 7 9 4 6], explain what these commands do:
a = [2 1 3 7 9 4 6];

ans3a = a(3) % Returns the third element of the vector.
ans3b = a(1:7) % Returns the elements of the vector with indexes 1 through 7.
ans3c = a(1:end) % Returns all elements of the vector, from index 1 to the end.
ans3d = a(1:end-1) % Returns all elements of the vector, except for the last one.
ans3e = a(2:2:6) % Returns the elements with indexes 2, 4 and 6.
ans3f = a(6:-2:1) % Returns the elements with indexes 6, 4 and 2.
ans3g = a(end-2:-3:2) % Returns the elements with indexes 5 and 2.
ans3h = sum(a) % Returns the sum of all elements in the vector. (32)
ans3i = mean(a) % Returns the mean of all elements in the vector. (32/7)
ans3j = min(a) % Returns the element with the lowest value in vector a. (1)