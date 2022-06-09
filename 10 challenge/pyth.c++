#include <iostream>
#include <math.h>

using namespace std;

int ex(int base, int power){
    int s = 1;
    for (int i = 0; i < power; i++)
    {
        s *= base;
    }
    return s;
}

int main() {
    cout << ex(2,4);
}
