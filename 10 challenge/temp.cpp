#include <iostream>

using namespace std;

double c_to_t(double temperature){
    double f_temp = (temperature*(1.8)) + 32;
    cout << f_temp;
    return f_temp;
}

double both(double temp, string unit){
    if (unit == "C")
    {
        return (temp - 32) * 1.8;
    }
    if (unit == "F"){
        return (temp * 1.8) + 32;
    }
    return 0;
    
}

int main() {
    c_to_t(9.0);

    cout << "\n";

    cout << both(89, "F");
}