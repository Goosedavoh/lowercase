#include <iostream>
#include <fstream>
#include <string>

std::string answer;
int main(){
    std::ifstream infile(".\\modes\\mode.txt");
    std::string mode;
    if (infile.is_open()) {
        std::getline(infile, mode);
        infile.close();
    } else {
        std::cerr << "Unable to open mode.txt file" << std::endl;
        return 1;
    }
    std::cout << "Current mode: " << mode << std::endl;
    std::ofstream file(".\\modes\\mode.txt");
    std::cout << "Enter mode: ";
    std::cin >> answer;
    file << answer;
    file.close();
    system("main.exe");
}