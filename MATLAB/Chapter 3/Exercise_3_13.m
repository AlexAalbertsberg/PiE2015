clear all; clc;

A = ones(6) + eye(6) % Generate matrix A.
B = A / 3 % Normalize.

x = B(:,1); % Take first column vector.
y = B(:,2); % Take second column vector.

angle = acosd(x'*y/(norm(x)*norm(y))); % Calculate angle.