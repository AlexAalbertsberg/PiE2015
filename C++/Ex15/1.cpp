#include<iostream>
#include<math.h>

double* getUserInput(double array[], int n)
{
    for(int i = 0; i < n; i++)
    {
        double num;
        std::cout<< "Specify a double: ";
        std::cin >> num;

        array[i] = num;
    }

    return array;
}

void displaySequence(double array[], int n)
{
    for(int i = 0; i < n; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

double sum(double array[], int n)
{
    double total = 0;
    for(int i = 0; i < n; i++)
    {
        total += array[i];
    }

    return total;
}

double stdev(double array[], int n)
{
    double mean = sum(array, n)/n;

    double varianceTimesN = 0;

    for(int i = 0; i < n; i++)
    {
        varianceTimesN += (array[i]-mean)*(array[i] - mean);
    }

    double variance = varianceTimesN / n;

    return sqrt(variance);
}

int main()
{
    int n;

    std::cout << "Specify number of real doubles: ";
    std::cin >> n;

    double realNums [n];

    double *realNumbers = getUserInput(realNums, n);

    std::cout << "The numbers in the sequence are: ";

    displaySequence(realNums, n);

    std::cout << "The sum of the numbers in the sequence equals: "
    << sum(realNums, n) << std::endl;

    std::cout << "The standard deviation of the number sequence equals: " <<
    stdev(realNums, n) << std::endl;
}
