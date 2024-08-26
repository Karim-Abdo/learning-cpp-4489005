// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int fahrenheit = 100;
    int celsius;

    celsius = (fahrenheit - 32) *  5 / 9;
    std::cout << std::endl;
    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "Celsius: " << celsius << std::endl;

    std::cout << std::endl << std::endl;

    double weight = 10.99; 
    std::cout << "Double: " << weight << std::endl;
    std::cout << "Intergal part: " << (int) weight << std::endl;
    std::cout << "Fractional part: " << (int)((weight - (int) weight) * 10000) << std::endl; 
    
    std::cout << std::endl << std::endl;
    return (0);
}
