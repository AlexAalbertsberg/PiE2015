clear all; clc;

x = [1 5 2 8 9 0 1];
y = [5 2 2 6 0 0 2];

x > y % element-wise comparison between x and y. every element of x that is 
      % larger than its corresponding index element in y becomes 1 in the 
      % result set.

y < x % does the same as the previous command.

x == y % compares each element and sets the resulting element to 1 if their 
       % values are equal, 0 if they are not.
       
x <= y % compares each element and sets the resulting element to 1 if the 
       % value of x's element is smaller than or equals to the value of y's 
       % element.
       
y >= x % same thing as the previous command.

x | y % element-wise comparison between x and y. Sets the resulting value 
      % to 1 if at least one of the elements is non-zero, otherwise 0.
      
x & (~y) % first calculates the complement of y. All non-zero elements are 
         % flipped to 0, and all zero elements are flipped to 1. Then
         % executes a logical AND between x and the complement of y. All
         % indices that both have a non-zero value will become 1 in the
         % result set.
         
(x > y) | (y < x) % two element wise comparisons between x and y. each 
                  % element of x that is larger than y's counterpart is 1.
                  % next the two result sets go through a logical OR with
                  % each other. The result is the same as x > y itself.

(x > y) & (y < x) % two element wise comparisons between x and y. each 
                  % element of x that is larger than y's counterpart is 1. 
                  % next the two result sets go through a logical AND with 
                  % each other. The result is the same as x > y itself.