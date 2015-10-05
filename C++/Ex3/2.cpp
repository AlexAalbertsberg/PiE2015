#include<iostream>
#include<string>

int main()
{
    int i = 3.0;
    std::cout << "The value of i = 3.0 is: "  << i << std::endl;
    i = 3.1;
    std::cout << "The value of i = 3.1 is: " << i << std::endl;
    i = 3.9;
    std::cout << "The value of i = 3.9 is: " << i << std::endl;
    i = 3.99;
    std::cout << "The value of i = 3.99 is: " << i << std::endl;
    i = -3.8;
    std::cout << "The value of i = -3.8 is: " << i << std::endl;
    i = 'x'; // ASCII char value 120.
    std::cout << "The value of i = 'x' is: " << i << std::endl;

    return 0;
}
