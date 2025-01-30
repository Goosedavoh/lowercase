#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

int main() {
    system("title lowercase -> cmd");
    while(true){
        std::string altcommand;
        std::cout << "command: ";
        std::getline(std::cin, altcommand);

        // Redirect the command output to a temporary file
        std::string command = altcommand + " > temp_output.txt";
        system(command.c_str());

        // Read and display the contents of the temporary file
        std::ifstream infile("temp_output.txt");
        if (infile.is_open()) {
            std::string line;
            while (std::getline(infile, line)) {
                std::cout << line << std::endl;
            }
            infile.close();
        } else {
            std::cerr << "Unable to open temporary output file" << std::endl;
        }

        // Remove the temporary file
        std::remove("temp_output.txt");
    }
    return 0;
}