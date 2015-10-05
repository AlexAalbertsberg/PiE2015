clear all; clc;

A = [1 2 3; 4 5 6; 7 8 9; 10 11 12]
B = [];

for i = 1:size(A,1)
    for j = 1: size(A,2)
        B(j,i) = A(i,j);
    end
end

B == A'
        
        
