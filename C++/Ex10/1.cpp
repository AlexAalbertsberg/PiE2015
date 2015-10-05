#include<iostream>

int main()
{
    char input;

    std::cin >> input;

    if(input == 'h')
    {
        std::cout << "Hello" << std::endl;
    }
    else if(input == 'w')
    {
        std::cout << "world" << std::endl;
    }
    else
    {
        std::cout << "Hello world" << std::endl;
    }
}
