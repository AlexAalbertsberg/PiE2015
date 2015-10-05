
#include<iostream>

using namespace std;
/*
int main()
{
    double a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    cout << a << " - " << b << " = " << int subtract(b,a) << endl;
    return 0;
}

int subtract(double firstNumber, double secondNumber);

subtract(double firstNumber, double secondNumber)
{
    answer = firstNumber - secondNumber;
    return answer;
};
*/

double subtract(double firstNumber, double secondNumber)
{
    return firstNumber - secondNumber;
}

int main()
{
    double a,b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    cout << a << " - " << b << " = " << subtract(a,b) << endl;
    return 0;
}
