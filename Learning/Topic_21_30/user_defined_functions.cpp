#include <iostream>

void happyBirthday(std::string name, int age); // If we just declare a function at the top, then we can use the code in it whenever we want to use. Not just before or after the code

int main(){

    // function = a block of reusable code

    std::string name = "Mickey";
    int age = 20;

    happyBirthday(name, age);


    return 0;
}

void happyBirthday(std::string name, int age){
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday dear " << name <<'\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "You are " << age << " years old!\n";
}

