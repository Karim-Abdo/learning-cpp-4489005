// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstdint> 

#define CAPACITY 5000
#define DEBUG // Use it if the message in ifdef DEBUG should be displayed

int main(){
    int32_t large = CAPACITY;
    uint8_t small = 37;
#ifdef DEBUG
    std::cout << "[About to perform the addition]" << std::endl;
#endif
    large += small; //short for "large = large + small"
    std::cout << "The large integer is " << large << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
