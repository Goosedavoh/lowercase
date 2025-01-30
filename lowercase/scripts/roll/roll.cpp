#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int input;
    std::cout << "Enter a number: ";
    std::cin >> input;

    std::srand(std::time(0));
    int random_number = std::rand() % input + 1;

    std::cout << "Random number between 1 and " << input << " is: " << random_number << std::endl;

    return 0;
}
