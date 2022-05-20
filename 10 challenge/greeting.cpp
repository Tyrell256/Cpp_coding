#include <iostream>

using namespace std;

void greeting() {
    string name;
    cout << "What is your name? \n";
    cin >> name;

    cout << "Hello " << name << ", Welcome to C++! C++ is an object oriented programming language!";

    
}

int main() {

    greeting();

    return 0;

}