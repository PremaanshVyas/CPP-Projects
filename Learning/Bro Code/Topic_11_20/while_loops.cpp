#include <iostream>

int main(){

    std::string name;

    //WHILE LOOP

    while(name.empty())
    {
        std::cout << "Enter your name: ";
        std::getline(std::cin , name);
    }

    // INFINTE LOOP

    // while (1 ==1){
    //     std::cout << "HELP! I'M STUCK IN AN INFINTE LOOP\n";
    // }
    

    std::cout << "Hello " << name;

    return 0;
}