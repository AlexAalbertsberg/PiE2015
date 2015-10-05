clear all; clc;

tc = input('Temperature celsius: ');

while(~isempty(tc))
    tf = 9/5*tc+32
    tc = input('Temperature celsius: ');
end
    