#include<iostream>

void binary(int number) {
	int remainder;

	if(number <= 1) {
		std::cout << number;
		return;
	}

	remainder = number%2;
	binary(number >> 1);
	std::cout << remainder;
}

int main()
{
    for(int i = 0; i < 16; i++)
    {
		std::cout << i << " converted to binary is: ";
		binary(i);
		std::cout << std::endl;
    }
}
