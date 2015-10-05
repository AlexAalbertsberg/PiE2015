#include<iostream>

#include "arithmetic.h"
int main()
{
    double a = 3.5;
    double b = 2.5;

    std::cout << "Result of add: " << add(a,b) << std::endl;
    std::cout << "Result of subtract: " << subtract(a,b) << std::endl;
    std::cout << "Result of multiply: " << multiply(a,b) << std::endl;
    std::cout << "Result of divide: " << divide(a,b) << std::endl;
}
