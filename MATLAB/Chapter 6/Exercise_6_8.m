clear all; clc;

x = input('Input number: ');

if(rem(x,2) == 0 & rem(x,3) == 0)
    ans = 'divisible by both 2 and 3.';
elseif(rem(x,2) == 0 & rem(x,3) ~= 0)
    ans = 'divisible by 2, not divisible by 3.';
elseif(rem(x,2) ~= 0 & rem(x,3) == 0)
    ans = 'divisible by 3, not divisible by 2.';
else
    ans = 'divisible by neither 2 nor 3.';
end