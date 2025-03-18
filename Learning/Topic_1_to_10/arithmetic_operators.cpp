#include <iostream>

int main() {

    // arithmetic operators = return the result of a specific
    //                        arithmetic operation (+ - * /)

    //parenthesis
    //multiplication and division
    //addition and subtraction

    int students = 20;
    students+=1; // instead of students = students + 1;
    students++; //used in loops generally just for + 1

    students-=1;
    students--;

    students*=2;

    students/=2;
    students/=3;

    int remainder = students % 2; //best for finding out if a number is odd or even


    std::cout << students << std::endl;

    return 0;
}