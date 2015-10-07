#include<iostream>
#include<sstream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<vector>

std::vector<char> alphabet(26);


int guessPassword(std::string password)
{
    int attempt = 0;
    for(int i = 0; i < alphabet.size(); i++)
    {
        char ci = alphabet[i];
        for(int j = 0; j < alphabet.size();j++)
        {
            char cj = alphabet[j];
            for(int k = 0; k < alphabet.size();k++)
            {
                char ck = alphabet[k];
                for(int l = 0; l < alphabet.size(); l++)
                {
                    char cl = alphabet[l];
                    for(int m = 0; m < alphabet.size();m++)
                    {
                        char cm = alphabet[m];
                        for(int n = 0; n < alphabet.size();n++)
                        {
                            char cn = alphabet[n];
                            attempt++;
                            std::stringstream ss;
                            ss << ci << cj << ck << cl << cm << cn;
                            std::string attemptString = ss.str();

                            if(attemptString == password)
                            {
                                return attempt;
                            }
                        }
                    }
                }
            }
        }
    }

    return attempt;
}

std::string generatePassword(int length)
{
    std::string password = "";

    // random seed, based on timestamp. may not always be random if you run
    // several times in a very short time period.
    srand(time(NULL));
    for(int i = 0;i < length; i++)
    {
        int letter = rand() % 25 + 1;
        password += alphabet[letter];
    }

    return password;
}

int main()
{
    alphabet = {
        'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s',
        't','u','v','w','x','y','z'
    };
    int length = 6;
    std::string password = generatePassword(length);

    std::cout << "Password to find: " << password << std::endl;

    int attempts = guessPassword(password);

    std::cout << "Password found in: " << attempts << std::endl;
}
