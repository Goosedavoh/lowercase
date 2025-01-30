#include <iostream>
#include <fstream>

int main(){
    std::string incolor;
    std::cout << "input color: ";
    std::cin >> incolor;
    
    std::ofstream file(".\\color\\color.txt");
    file << incolor;
    file.close();

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
    else{std::cout << "Invalid color" << std::endl; system("color 7");}
}