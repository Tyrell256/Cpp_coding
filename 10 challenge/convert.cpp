#include <iostream>

using namespace std;

double meter_feet(double meters = 0, double feet = 0) {
    if (meters != 0)
    {
       return meters/3.381;
    }
    if(feet != 0){
        return feet*3.381;
    }

    return 0;
    
}

int main() {
    cout << meter_feet( 0,8);
    
}