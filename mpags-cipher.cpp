#include <iostream>

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
}