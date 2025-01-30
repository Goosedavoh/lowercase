#include <iostream>
#include <cstdlib>

int main() {
    // Use the dir command to list just the names of the folders
    system("cmd /c \"dir .\\scripts /ad /b\"");

    return 0;
}