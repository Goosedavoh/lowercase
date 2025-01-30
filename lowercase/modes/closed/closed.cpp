#include <iostream>
#include <string>
#include <map>
#include <cstdlib>
#include <fstream>
#include <ctime>
using namespace std;

void clear() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void calc(){
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter operator: ";
    cin >> op;

    switch (op) {
        case '+':
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 / num2 << endl;
            else
                cout << "Cannot divide by zero" << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
            break;
    }
}

void hello() {
    string name;
    cout << "Enter your name: ";
    cin.ignore(); // Clear input buffer
    getline(cin, name);
    cout << "Hello " << name << endl;
}

void mode() {
    string answer;
        cout << "Mode: closed" << endl;
    cout << "do you want to change mode? (y/n): ";
    cin >> answer;
    if (answer == "y"){
        ofstream cmode(".\\modes\\mode.txt");
        if (cmode.is_open()) {
            cmode << "1";
            cmode.close();
            cout << "Mode changed to open." << endl;
        } 
        else {
            cerr << "Unable to open file" << endl;
        }
        system(".\\modes\\open\\open.exe");
    }
    else{
        system(".\\modes\\closed\\closed.exe");
    }

}


void roll() {
    int *input;
    cout << "Enter a number: ";
    cin >> *input;

    srand(time(0));
    int randomnuber = rand() % *input + 1;

    cout << "Random Number was " << randomnuber;
    delete(input);
}

int main() {
    map<string, void(*)()> function_dict = {
        {"quit", []() { exit(0); }},
        {"calc", calc},
        {"hello", hello},
        {"clear", clear},
        {"mode", mode},
        {"roll", roll}
    };

    string command;

    while (true) {
        cout << "command: ";
        cin >> command;

        auto it = function_dict.find(command);
        if (it != function_dict.end()) {
            it->second();
        } else {
            cout << "Invalid command" << endl;
        }
    }

    return 0;
}