# include <iostream>
#include <cmath>

// Hypotenuse Calculator Program
// Formula : c = sqrt(a^2 + b^2) where a and b are the right-angled sides

int main() {

    double a;
    double b;
    double c;

    std::cout << "Enter side A: ";
    std::cin >> a;

    std::cout << "Enter side B: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "Side C: " << c << std::endl;

    return 0;
}