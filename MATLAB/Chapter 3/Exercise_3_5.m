clear all; clc;

A = [1:4; 5:8; 1 1 1 1];

x = A(:,4) % Retrieves each element in column 4.

B = A(1:3,2:2) % Retrieves the second element of rows 1, 2 and 3.

A(1,1) = 9 + A(2,3) % Sets the value of index (1,1) to the value of index 
                    % (2,3) + 9.

A(2:3, 1:3) = [0 0 0;0 0 0] % Sets the values of indices (2,1), (2,2), 
                            % (2,3), (3,1), (3,2), (3,3) to 0.
                            
A(2:3, 1:2) = [1 1; 3 3] % Sets the values of indices (2,1), (2,2), (3,1),
                         % (3,2) to (respectively) 1, 1, 3 and 3.

y = A(3:3, 1:4) % Loads the third row of A into a variable y.

A = [A; 2 1 7 7; 7 7 4 5] % Adds two rows to A.

C = A([1,3], 2) % Retrieves indices (1,2) and (3,2) and assigns them to C.

D = A([2,3,5],[1,3,4]) % Retrieves indices (2,1), (2,3), (2,4), (3,1), 
                       % (3,3), (3,4), (5,1), (5,3), (5,4) and assigns them
                       % to D.
                       
D(2,:) = [] % Deletes row 2 from D.