#include<array>
#include<iostream>

int main()
{
    // an array can only be initialized with a constant, so taking user input for
    // the size serves no purpose.
    std::array<int, 10> arr;

    for(int i = 0; i < arr.size(); i++)
    {
        std::cout << "Input a number: ";
        std::cin >> arr[i];
    }

    int total = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        total += arr[i];
    }

    std::cout << "Average = " << (double)total/arr.size() << std::endl;
}
