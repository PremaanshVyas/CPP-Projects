#include <iostream>

// double square(double length);
// double cube(double length);

// int main(){

//     // return = return a value back to the spot
//     //          where you called the encompassing function

//     double length = 6.0;
//     double area = square(length);
//     double volume = cube(length);

//     std::cout << "Area: " << area << "cm^2\n";
//     std::cout << "Volume: " << volume << "cm^3\n";

//     return 0;
// }

// double square(double length){
//     return length * length;
// }

// double cube(double length){
//     return length * length * length;
// }

// std::string concatStrings(std::string string1, std::string string2);

// int main(){

//     std::string firstName = "Mickey";
//     std::string lastName = "Virus";

//     std::string fullName = concatStrings(firstName, lastName);

//     std::cout << "Hello " << fullName << '\n';

//     return 0;
// }

// std::string concatStrings(std::string string1, std::string string2){
//     return string1 + " " + string2;
// }

int sum(int num1, int num2);

int main(){

    int num1;
    int num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    int result = sum(num1, num2);

    std::cout << "The sum of " << num1 << " and " << num2 << " is equal to " << result << ".\n";

    return 0;
}

int sum(int num1, int num2){
    return num1 + num2;
}

