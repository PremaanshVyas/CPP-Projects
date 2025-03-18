#include <iostream>

int main(){

    int x; //declaration
    x = 5; //assignment
    int y = 6;

    int sum = x + y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    //integer (whole number)
    int age = 20;
    int year = 2025;
    int days = 7; //the decimal portion is truncated (if 7.5) because it has to be a whole number

    std::cout << days << std::endl;

    //double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    std::cout << price << std::endl;

    // single character
    char grade = 'A';
    char initial = 'C'; //Overflow warning if 'BC' and will display only the last letter in it
    char currency = '$';

    std::cout << initial << std::endl;

    //boolean (true or false)
    bool student = false;
    bool power = true;
    bool forSale = true;

    //string (object that represents a sequence of text)
    std::string name = "Mickey";
    std::string day = "Friday";
    std::string food = "pizza";
    std::string address = "123 Fake St.";

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old" << std::endl;

    return 0;
}