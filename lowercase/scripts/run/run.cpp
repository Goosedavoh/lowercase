#include <iostream>

int main(){
    std::string file;
    std::cout << "Enter the file path: ";
    std::cin >> file;
    file = "start " + file;
    system(file.c_str());
}