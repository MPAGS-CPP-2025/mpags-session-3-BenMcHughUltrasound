#include <iostream>
#include <string>
int main ()
{

    char in_char{'x'};
    std::string out_str{""};

    //Take each letter from user input
    while (std::cin >> in_char)
    {
        if (std::isalpha(in_char))
        {
        //std::cout << in_char;
        out_str += std::toupper(in_char);
        }


    }
    std::cout << out_str << std::endl;
    // - convert to upper case
    // - convert numbers to words
    // - ignore non alphanumeric characters
    // - add result to string variable
    // print the new string
}