#include<iostream>
//#include<math.h> Alternative

double power(double num, double power)
{
    //return pow(num, power);
    double result = 1;
    for(int i = 1; i <= power; i++)
    {
        result *= num;
    }
    return result;
}

int main()
{
    double a = 2.2;
    double b = 3.4;

    std::cout << power(a,b) << std::endl;
}
