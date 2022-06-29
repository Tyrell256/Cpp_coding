#include <iostream>


using namespace std;

double exp(double base, double power){
    double x = 1;
    
    if (power > 0){
        for (int i = 0; i < power; i++)
        {
            x *= base;
        };
      
    }
    if (power < 0){
        for (int i = 0; i > power; i--)
        {
            x /= base;
        };
        
    }


    return x;
    
}

int main() {
    cout << exp(4, 4) << "\n";
    cout << exp(4, -4) << "\n";
}