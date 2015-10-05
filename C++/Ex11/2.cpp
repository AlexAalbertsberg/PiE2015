#include<iostream>

void askQuestion();
void validateAnswer(char answer);

int chance = 1;
void askQuestion()
{
    std::cout << "Which of the following programming languages is NOT taught in this course?" << std::endl;
    std::cout << "a. C++" << std::endl;
    std::cout << "b. C#" << std::endl;
    std::cout << "c. Matlab" << std::endl;

    char answer;
    std::cin >> answer;

    validateAnswer(answer);
}

void validateAnswer(char answer)
{

    if(answer != 'a' && answer != 'b' && answer != 'c')
    {
        std::cout << "You did not input a valid answer!" << std::endl;
        askQuestion();
    }
    else if(answer == 'b')
    {
        std::cout << "Correct!" << std::endl;
    }
    else if(chance != 2)
    {
        chance++;
        std::cout << "Wrong, try again!" << std::endl;
        askQuestion();
    }
    else
    {
        std::cout << "Wrong!" << std::endl;
    }
}

int main()
{
    askQuestion();
}
