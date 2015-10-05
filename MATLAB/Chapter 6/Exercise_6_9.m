clear all; clc;

x = input('Input month (1-12): ');

switch x
    case {1,3,5,7,8,10,12}
        ans = 31;
    case{4,6,9,11}
        ans = 30;
    case 2
        ans = 28;
end