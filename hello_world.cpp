//Including the libraries
#include <iostream>
#include <string> 
//main function
int main() {
//Name input
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
//Prining hello world
    std::cout << "Hello, World! from " << name << std::endl;
    return 0;
}
