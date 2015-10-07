#include<string>
#include<fstream>
#include<iostream>

int main()
{
    std::string s;

    std::ifstream fin;
    fin.open("test.txt");

    if (fin.is_open()) {

        /*fin >> s;
        while (!fin.eof()) {
            std::cout << s <<std::endl;
            fin >> s;
        }*/

        /*while((fin >> s).good())
        {
            std::cout << s << std::endl;
        }*/

        /*while((fin >> s).good())
        {
            std::cout << ((fin>>s).good() == !((fin>>s).bad())) << std::endl;
        }*/

        /*while(fin >> s)
        {
            std::cout << s << std::endl;
        }*/
        // All three of them work. However, the use of eof() requires some data
        // to be read beforehand for it to work.

        fin.close();
    }
}
