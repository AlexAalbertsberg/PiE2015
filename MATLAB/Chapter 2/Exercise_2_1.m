clear all;clc;

answer1 = 2/2*3; % by hand, the result is 3

answer2 = 8*5\4; % by hand, the result is 0.1

answer3 = 8*(5\4); % by hand, the result is 6.4

answer4 = 7-5*4\9; % by hand, the result is 6.55

answer5 = 6-2/5+7^2-1; % by hand, the result is 53.6

answer6 = 10/2\5-3+2*4; % by hand, the result is 6

answer7 = 3^2/4; % by hand, the result is 2.25

answer8 = 3^2^3; % by hand, the result is 729

% these commands provide additional information about the functions floor,
% round and ceil.
help round
help floor
help ceil

answer9 = 2+round(6/9+3*2)/2; % by hand, the result is 5.5
answer10 = 2+floor(6/9+3*2)/2; % by hand, the result is 5
answer11 = 2+ceil(6/9+3*2)/2; % by hand, the result is 5.5

answer12A = pi/3; % result: pi/3
answer12B = answer12A-1; % result: pi/3 - 1
answer12C = answer12B+5; % result: pi/3 + 4
answer12D = abs(answer12C)/answer12C; % result: 1