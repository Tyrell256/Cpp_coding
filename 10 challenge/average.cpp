#include <iostream>
#include <vector>
#include <string>

using namespace std;

double average(vector<double> list) {
    double n;

    for (double i = 0; i < list.size(); i++)
    {
        n = list[i] + n;
        //cout << n << "\n";
    }

    double x;

    double y = list.size();

    x = n / y;

    return x;   
    
}

int main() {

    vector<double> nums = {12, 32, 90, 80};
    cout << average(nums) << "\n";
}
