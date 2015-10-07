#include<vector>
#include<cmath>
#include<iostream>

int main()
{
    std::vector<int> nums(100);

    for(int i = 1; i <= 100; i++)
    {
        nums[i-1] = i;
    }

    for(int i = 0; i < 100; i++)
    {
        bool isPrime = true;

        if(i == 0) isPrime = false; //edge case because 1 is not considered a prime number.
        for(int j = 1; j < i; j++)
        {
            double test = (double)nums[i]/nums[j];
            if(floor(test) == test)
            {
                isPrime = false;
                break;
            }
        }
        std::cout << "Number " << nums[i] << " is ";

        if(isPrime) std::cout << "a prime." << std::endl;
        else std::cout << "not a prime." << std::endl;
    }
}
