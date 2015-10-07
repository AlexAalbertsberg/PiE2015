#include<iostream>
#include<string>
#include<sstream>

int main()
{
    std::string s = "12345";
    std::cout << "Original string: " << s << std::endl;

    std::stringstream ss;
    ss.str(s);

    ss << "2 4 6 8 10";

    std::string S = ss.str();
    std::cout << "New string: " << S << std::endl;
}
