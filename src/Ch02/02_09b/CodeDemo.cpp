// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstdint>
#include <string.h>

int main(){
    const size_t LENGTH1 = 25;

    char array_str1 [LENGTH1] = "Hello World! ";
    char array_str2 [] = "what's up?";

    std::string std_str1 = "Hi everyone! ";
    std::string std_str2 = "How's it going?";

    strncat(array_str1, array_str2, LENGTH1); 
    std::cout << array_str1 << std::endl;
    std::cout << std_str1 + std_str2 << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
