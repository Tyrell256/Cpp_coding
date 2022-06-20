#include <iostream>

using namespace std;

bool leap(int num){
    if(num % 4 != 0){
        return false;

    }
    if (num % 100 == 0 && num % 400 != 0 )
    {
        return false;
    }
    return true;
    
    
}

int main() {
    cout << leap(1900);
    cout << leap(2000);
    cout << leap(2004);
    cout << leap(2021);
    cout << leap(1800);
    cout << leap(1700);
    cout << leap(1600);
}