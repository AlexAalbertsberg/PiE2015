clear all; clc;

a = ceil(5 * randn(6,6));

b = find(a < -3) % find indices of all elements with values less than -3.
c = a(b) % find the values of all elements that satisfy the previous condition.

d = find(-1 < a & a < 5) % find indices of all elements with values between -1 and 5 (exclusive).
e = a(d) % find the values of all elements that satisfy the previous condition.

[i,j] = find(a==0); % find all columns that have at least one 0.
a(:,j) = []; % delete all columns that were found.