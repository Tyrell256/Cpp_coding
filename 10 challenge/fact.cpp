#include <iostream>

using namespace std;

int fact(int num){

    int j;

     

    for (int i = (num - 1); i > 0; i--)
    {
       num *= i;
    }

    if (num == 0){
        num = 1;
    }

    return num;
    
}

int main() {
    cout<< fact(8) << "\n";
    cout<< fact(2) << "\n";
    cout<< fact(1) << "\n";

    cout<< fact(7) << "\n";
}