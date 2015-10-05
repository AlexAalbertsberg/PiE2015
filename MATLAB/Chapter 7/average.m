function avr = average(x)
%AVERAGE    Computes the average value of a vector x and returns it in avr.
    n = length(x);
    avr = sum(x)/n;
return;