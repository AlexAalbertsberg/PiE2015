clear all
clc
% Design our own thermometer.
BodyTemperature = input('Enter the temperature: ');
NormalTemperature = 98.6;

switch(BodyTemperature)
    case 98.6
        disp('You are healthy.');
    case 100
        disp('You are sick.');
end