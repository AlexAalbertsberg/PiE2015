function dragcoeff = drag(N)
%drag    Calculates the drag coefficient of a Reynold's number N.

if(N <= 0)
    dragcoeff = 0;
elseif(N > 0 & N <= 0.1)
    dragcoeff = 24/N;
elseif(N > 0.1 & N <= 1e3)
    dragcoeff = 24/N*(1+0.14*N^0.7);
elseif(N > 1e3 & N <= 5e5)
    dragcoeff = 0.43;
else
    dragcoeff = 0.19 - 8e4/N;
end

return;

