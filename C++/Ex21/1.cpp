#include<map>
#include<string>
#include<iostream>

std::map<std::string, float> stringToFloat;
std::map<float,char> floatToChar;
std::map<char, std::string> charToString;

int main()
{
    std::string ex = "Example";
    float fl = 1.0;
    char test = 'c';

    stringToFloat.insert(std::pair<std::string,float>(ex,fl));
    floatToChar.insert(std::pair<float,char>(fl, test));
    charToString.insert(std::pair<char,std::string>(test,ex));

    std::cout << charToString[floatToChar[stringToFloat[ex]]];
}
