#include <iostream>
#include <fstream>
#include <string>
void colorcheck();


bool fileExists(const std::string& modedir) {
    return system(("if exist \"" + modedir + "\" (exit 0) else (exit 1)").c_str()) == 0;
}

bool fileExists(const std::string& color) {
    return system(("if exist \"" + color + "\" (exit 0) else (.\\scripts\\color\\color.exe)").c_str()) == 0;
}

int main(){
    system(".\\scripts\\clear\\clear.exe");
    system("title lowercase");
    std::ifstream infile(".\\modes\\mode.txt");
    std::string mode;
    if (infile.is_open()) {
        std::getline(infile, mode);
        infile.close();
    } else {
        std::cerr << "Unable to open mode.txt file" << std::endl;
        return 1;
    }

    std::string modedir = ".\\modes\\" + mode + "\\" + mode + ".exe";

    if (fileExists(modedir)) {
            system(modedir.c_str());
    } else {
        system(".\\scripts\\mode\\mode.exe");
    }

    return 0;
}

void colorcheck(){
    std::string incolor;
    std::ifstream color(".\\scripts\\color\\color.txt");

    if (fileExists(".\\scripts\\color\\color.txt")) {
        std::getline(color, incolor);
        color.close();
        if(incolor == "black"){system("color 0");}
        else if(incolor == "blue"){system("color 1");}
        else if(incolor == "green"){system("color 2");}
        else if(incolor == "aqua"){system("color 3");}
        else if(incolor == "red"){system("color 4");}
        else if(incolor == "purple"){system("color 5");}
        else if(incolor == "yellow"){system("color 6");}
        else if(incolor == "white"){system("color 7");}
        else if(incolor == "gray"){system("color 8");}
        else if(incolor == "light blue"){system("color 9");}
        else if(incolor == "light green"){system("color A");}
        else if(incolor == "light aqua"){system("color B");}
        else if(incolor == "light red"){system("color C");}
        else if(incolor == "light purple"){system("color D");}
        else if(incolor == "light yellow"){system("color E");}
        else if(incolor == "bright white"){system("color F");}
        else{std::cout << "Invalid color" << std::endl; system("color 7");};
    } else {
        system(".\\scripts\\color\\color.exe");
    }
}