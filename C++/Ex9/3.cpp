#include<iostream>

int main()
{
    double x;
    std::cin >> x;

    if(std::cin.fail())
    {
        std::cout << "Input was not an integer." << std::endl;
    }
    else
    {
        std::cout << "Input was an integer." << std::endl;
    }
}
