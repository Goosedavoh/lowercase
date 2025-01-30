#include <iostream>
#include <fstream>
#include <cstdlib>

int main(){
    while(true){
        std::string customcommand;
        std::cout << "Enter a command: ";
        std::cin >> customcommand;
        std::string cclocation = ".\\scripts\\" + customcommand + "\\" + customcommand;

        if (customcommand == "quit") {
            exit(0);
        } else {
            std::ifstream file(cclocation);
            if (file.good()) {
                file.close();
                system(cclocation.c_str());
            } else {
                std::cout << "Not a valid command, check command path." << std::endl;
            }
        }
    }
    return 0;
}