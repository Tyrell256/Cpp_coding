#include <iostream>

using namespace std;

//Will calculate Exponents

void exponents(int base, int power ) {
    int s = 1;
    for (int i = 0; i < power; i++)
    {
        s *= base;
    }

    cout << s;
    
}

int main() {
    exponents(2, 8);
}
