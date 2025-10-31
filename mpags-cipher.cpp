#include <iostream>
#include <string>
int main ()
{
    // WOOOO COMMENTS
    /* 
    MULTI 
    LINE
    COMMENTS
    */

    int myInt{4}; // Initialise an integer
    std::cout << myInt <<std::endl; //print myInt to screen
    myInt = 7; // change myInt integer
    std::cout << myInt <<std::endl; //print myInt to screen again

    double myDouble{3.14159}; //Initialise a double
    std::cout << myDouble <<std ::endl; // display double to screen
    int myIntFromDouble{myDouble}; // initalise an integer from myDouble
    std::cout << myIntFromDouble << std::endl; // display int made from double to screen

    const double myConstDouble{2.718}; // define const
    std::cout << myConstDouble <<std::endl;
    int mySecondInt{99};
    mySecondInt = 98;
    //constexpr int myConstInt{mySecondInt}; // should return an error
    std::string myString {"Hi this is my string"}; // using the string include to make a string
    std::cout << myString << "\n"; // outputs a string to terminal with a newline after

    int myIntToOperateOn{5};
    double myDoubleToOperateOn{7.5};
    std::cout << myIntToOperateOn * myDoubleToOperateOn << std::endl; // multiplication
    std::cout << myDoubleToOperateOn/myIntToOperateOn <<std::endl; //double division
    std::cout << myInt/myIntToOperateOn << std::endl; // integer division
    char myChar = 'i'; // initial char 
    myString[2] = myChar; // assign character 2 in myString to myChar
    std::cout << myString << std::endl; // output to terminal
    return 0;
}