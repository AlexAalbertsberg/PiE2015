clear all; clc;

x = 1 : 10;
y = [3 5 6 1 8 2 9 4 0 7];

(x > 3) & (x < 8) % Finds all elements in x where the value is between 3 
                  % and 8 (both exclusive).

x(x>5) % Returns a vector containing all elements of x that have a value 
       % greater than 5.
       
y(x <= 4) % Returns the elements of vector y that are location on the 
          % indices where the values in x are less than or equal to 4.
          
x((x<2) | (x>=8)) % Returns the elements in x where the value is either 
                  % less than 2 or greater than or equal to 8 as a vector.
                  
y((x<2) | (x>=8)) % Returns the elements in y at the indices where the 
                  % values in x are less than 2 or greater than or equal to 
                  % 8 (indices 1, 8, 9 and 10).
                  
x(y < 0) % Returns all elements in x on the indices where the corresponding 
         % value in y is less than 0. y does not contain any elements with 
         % values less than 0, so the result set is empty.