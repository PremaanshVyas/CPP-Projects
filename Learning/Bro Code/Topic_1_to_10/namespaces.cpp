// #include <iostream>

// namespace first{
//     int x = 1;
// }
// namespace second{
//     int x = 2;
// }


// int main(){
//     // Namespaces = provides a solution for preventing name conflicts
//     //              in large projects. Each entity needs a unique name.
//     //              A namespace allows for identically named entities
//     //              as long as the namespaces are different

//     using namespace first;
    
//     std::cout << x;

//     return 0;
// }

#include <iostream>

int main() {
    using std::cout; // to shorten the code along the way
    using std::string;
    using std::endl;

    string name = "Mickey";

    cout << "Hello " << name << endl;;

    return 0;
}