# include <iostream>

int main(){
    // The const keyword specifies that a varible's value is constant
    // tells the compiler to prevent anything from modifying it
    // (read only)

    const double PI = 3.14159; // Generally, the name of the variable is all capital letters whenever const is used (a good coding practice to write a clean code)
    double radius = 10;
    double circumference = 2 * PI * radius;

    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;

    std::cout << circumference << "cm" << std::endl;

    return 0;
}