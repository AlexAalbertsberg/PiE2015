#include<iostream>

int main()
{
    std::cout << "Which of the following programming languages is NOT taught in this course?" << std::endl;
    std::cout << "a. C++" << std::endl;
    std::cout << "b. C#" << std::endl;
    std::cout << "c. Matlab" << std::endl;

    char answer;
    std::cin >> answer;

    if(std::cin.fail())
    {
        std::cout << "You did not input a valid answer!" << std::endl;
    }

    if(answer == 'b')
    {
        std::cout << "Correct!" << std::endl;
    }
    else
    {
        std::cout << "Wrong!" << std::endl;
    }
}
