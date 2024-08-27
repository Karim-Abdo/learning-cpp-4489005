// Learning C++ 
// Exercise 03_01
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cow_purpose{dairy, meat, hide, pet};

struct cow{
    std::string name;
    int age;
    cow_purpose purpose;
};

int main(){
    cow my_cow;
    my_cow.name = "Betsy";
    my_cow.age = 3;
    my_cow.purpose = cow_purpose::dairy;
    std::cout << "My cow's name is " << my_cow.name << std::endl;
    std::cout << my_cow.name << " is " << my_cow.age << " years old. " << std::endl;
    std::cout << my_cow.name << " purpose type is " << (int) my_cow.purpose << " cow." << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
