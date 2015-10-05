#include<iostream>

int main()
{
    double n;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> n;
    // checking if n is negative
    if(n < 0)
    {
        // if n IS negative, lets the user know!
        std::cout << "The number is negative" << std::endl;
    }
    // if n is NOT negative, we skip to the
    // else if statements and check if n is
    // equal to zero
    else if(n == 0)
    {
        //...and, if so, let the user know!
        std::cout << "The number is 0" << std::endl;
    }
    // finally, if n is not negative OR 0,
    // we know it must be positive
    else
    {
        std::cout << "The number is positive" << std::endl;
    }
}
