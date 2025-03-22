#include <iostream>

int main(){

    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    // std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};

    // std::cout << students[0] << '\n';
    // std::cout << students[1] << '\n';
    // std::cout << students[2] << '\n';

    // Using for loop to get the above code's output easily
    for(int i = 0; i < (sizeof(grades)/sizeof(char)); i++){
        std::cout << grades[i] << '\n';
    }

    return 0;
}