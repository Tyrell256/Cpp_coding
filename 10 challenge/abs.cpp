#include <iostream>

using namespace std;

int abs(int num) {
    if(num > 0){
        return num;
        //break;
    }
    if(num < 0){
        return num * -1;
        //break;
    }
    return (num - num);
}

int main() {
    cout << abs(0) << "\n";
    cout << abs(8) << "\n";
    cout << abs(-1) << "\n";
    cout << abs(1) << "\n";
    cout << abs(4) << "\n";
}