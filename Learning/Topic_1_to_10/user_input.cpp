#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main() {

    std::string name;
    int age;


    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "What's your full name?: "; //string literal
    std::getline(std::cin >> std::ws, name); // for whitespaces


    std::cout << "Hello " << name << std::endl;
    std::cout << "You are " << age << " years old" << std::endl;

    return 0;
}