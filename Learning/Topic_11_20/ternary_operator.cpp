#include <iostream>

int main(){

    // ternary operator ?: = replacement to an if/else statement
    // condition ? expression1 : expression2;

    // int grade = 75;
    // grade >= 60 ? std::cout << "You pass!" : std::cout << "You fail!";

    // int number = 8;
    // number % 2 == 1 ? std::cout << "ODD" : std::cout << "EVEN";

    // bool hungry = false;
    // hungry ? std::cout << "You are hungry" : std::cout << "You are full";
    bool hungry = false;
    std::cout << (hungry ? "You are hungry" : "You are full"); // another way of writing the ternary operator

    return 0;
}