clear all; clc;

A = [2 7 9 7; 3 1 5 6; 8 1 2 5];

A' % conjugate tranpose
A(1,:)' % conjugate transpose of the first row of A.

%A(:,[14]) % Attempts to retrieve column 14, however it does not exist in A.
%A([23],[31]) % Attempts to retrieve index (23,31), however it does not 
             % exist in A.
             
reshape(A,2,6) % Reshapes the matrix into a matrix with 2x6 dimensions.
A(:) % Displays the matrix in 1x12 dimension.

flipUpsideDown = flipud(A) % Flips the matrix upside down.

flipLeftRight = fliplr(A) % Mirrors the matrix horizontally.

%[A A(end,:)] % Attempts to concatenate the last row of A to A itself.

[A; A(1:2,:)] % Concatenates the first two rows of A to the end of A.

sum(A) % Calculates the sum of each column of A.

sum(A') % Calculates the sum of each row of A.

mean(A) % Calculates the mean of each column of A.

mean(A') % Calculates the mean of each row of A.

sum(A,2) % Returns a column vector containing the sum of each row.

mean(A,2) % Returns a column vector containing the mean of each row.

min(A) % Returns a row vector containing the lowest number in each column.

max(A') % Returns a row vector containing the highest number in each row.

min(A(:,4)) % Returns the lowest element in column 4 in A.

[min(A)' max(A)'] % Concatenates the minimum numbers for each row and the 
                  % maximum numbers for each row as two column vectors.

max(min(A)) % Returns the maximum numbers of the minimum row values.