#include <iostream>

int myNum = 3; //Global variable (not recommended as it pollutes the global namespace and using them in the functions is more secure)

void printNum();

int main(){

    // Local variables = declared inside a function or block {}
    // Global variables = declared outside of all functions
    
    int myNum = 1;

    printNum();
    std::cout << ::myNum << '\n'; // use :: in front of the variable name to use the global variable scope

    return 0;
}
void printNum(){
    int myNum = 2;
    std::cout << ::myNum << '\n'; // use :: in front of the variable name to use the global variable scope
}