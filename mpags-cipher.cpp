#include <iostream>
#include <string>
int main()
{
    char in_char{'x'};
    std::string out_str{""};

    //Take each letter from user input
    while (std::cin >> in_char) {
        // - convert to upper case
        if (std::isalpha(in_char)) {
            out_str += std::toupper(in_char);
            continue;
        }

        // - convert numbers to words
        switch (in_char) {
            case '0':
                out_str += "ZERO";
                continue;
            case '1':
                out_str += "ONE";
                continue;
            case '2':
                out_str += "TWO";
                continue;
            case '3':
                out_str += "THREE";
                continue;
            case '4':
                out_str += "FOUR";
                continue;
            case '5':
                out_str += "FIVE";
                continue;
            case '6':
                out_str += "SIX";
                continue;
            case '7':
                out_str += "SEVEN";
                continue;
            case '8':
                out_str += "EIGHT";
                continue;
            case '9':
                out_str += "NINE";
                continue;

            default:
                continue;
        }

        // - ignore non alphanumeric characters
    }
    // print the new string
    std::cout << out_str << std::endl;
}