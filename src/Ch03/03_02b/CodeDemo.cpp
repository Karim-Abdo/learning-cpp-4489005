// Learning C++ 
// Exercise 03_02
// Classes, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

class cow{
public:
    cow(std::string name_i, int age_i, cow_purpose purpose_i){
        this->name = name_i;
        this->age = age_i;
        this->purpose = purpose_i;

    }
    std::string get_name(){
        return name;
    }

void set_name(std::string new_name){
        name = new_name;
    }
    
    int get_age(){
        return age;
    }

void set_age(int new_age){
        age = new_age;
    }

    cow_purpose get_purpose(){
        return purpose;
    }

    void set_purpose(cow_purpose new_purpose){
        purpose = new_purpose;
    }

private:
    std::string name;
    int age;
    cow_purpose purpose;
};

int main(){
    cow my_cow("Hilda", 7, cow_purpose::pet);

    std::cout << my_cow.get_name() << " is a type-" << (int)my_cow.get_purpose() << " cow." << std::endl;
    std::cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
