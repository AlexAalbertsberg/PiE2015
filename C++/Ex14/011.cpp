#include<iostream>

int factorial(int a)
{
    int total = 1;
    for(a; a >= 1; a--)
    {
        total *= a;
    }

    return total;
}

int main()
{
    int a;

    std::cout << "Input a number: " << std::endl;
    std::cin >> a;
    std::cout << "The factorial of " << a << " equals " << factorial(a)
    << std::endl;
}
