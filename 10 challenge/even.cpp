#include <iostream>

using namespace std;

bool even(int num) {
    if (num % 2 != 0){
        return false;
    }
    return true;
}

int main() {
    cout << even(2);
    cout << even(4009);
    cout << even(1);
    cout << even(0);
}