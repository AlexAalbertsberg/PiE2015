clear all; clc;

T = [3 4; 1 8; -4 3]
A = [diag(-1:2:3) T; -4 4 1 2 1]

% extract a vector consisting of the 2nd and 4th elements of the 3rd row
answer1 = A(3:3,[2,4])

% find the minimum of the 3rd column
answer2 = min(A(:, 3))

% find the maximum of the 2nd row
answer3 = max(A(2, :))

% compute the sum of the 2nd column
answer4 = sum(A(:,2))

% compute the mean of the 1st and 4th rows
answer5 = mean(A([1,4],:))

% extract the submatrix consisting of the 1st and 3rd rows and all columns
answer6 = A([1,3],:)

% extract the submatrix consisting of the 1st and 2nd rows and the 3rd, 4th and 5th columns
answer7 = A([1,2],3:5)

% compute the total sum of the 1st and 2nd rows
answer8 = sum(sum(A([1,2],:)))

% add 3 to all elements of the 2nd and 3rd columns
answer9 = A(:,2:3) + 3