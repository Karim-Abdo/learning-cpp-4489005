// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>

//#define AGE_LENGTH 4 macro definition 

int main(){
    const size_t AGE_LENGTH = 4; // constant definition
    int age[AGE_LENGTH];
    float temperature[] = {31.5, 32.7, 38.9};
    std::cout << "The age array has " << AGE_LENGTH << " elements" << std::endl;
    age[0] = 25;
    age[1] = 20;
    age[2] = 19;
    age[3] = 19;

    std::cout << "age[0] " << age[0] << std::endl;
    std::cout << "age[1] " << age[1] << std::endl;
    std::cout << "age[2] " << age[2] << std::endl;
    std::cout << "age[3] " << age[3] << std::endl;
    std::cout << std::endl << std::endl;
    std::cout << "temperature[0] " << temperature[0] << std::endl;
    std::cout << "temperature[1] " << temperature[1] << std::endl;
    std::cout << "temperature[2] " << temperature[2] << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
