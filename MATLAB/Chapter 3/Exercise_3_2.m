clear all;clc;

% Create a vector containing 5 elements such that its components are
% equally spaced when you take the logarith of it.

x = [exp(1) exp(2) exp(3) exp(4) exp(5)]; % Create a vector with 5 
                                          % subsequent euler numbers.
                                          
ans1 = log(x)                                    % The logarithm returns a vector 
                                          % with elements 1, 2, 3, 4 and 5.