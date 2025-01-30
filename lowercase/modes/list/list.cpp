#include <iostream>
#include <cstdlib>

int main() {
    // Use the dir command to list just the names of the folders
    system("cmd /c \"dir .\\modes /ad /b\"");

    // Execute the mode.exe script
    system(".\\scripts\\mode\\mode.exe");

    return 0;
}