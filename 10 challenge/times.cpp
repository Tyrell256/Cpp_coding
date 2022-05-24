#include <iostream>
#include <vector>
using namespace std;

double product(double num, double num2) {

    double result = num * num2;
    cout << result;
    return result;
}

void multple(vector<double> set, vector<double> set2){
    
    vector<double> set3;
    for (int i = 0; i < set.size(); i++)
    {
        set3.push_back(set[i] * set2[i]);
    }

    for (int j = 0; j < set3.size(); j++)
    {
        cout << set3[j] << " ";
    }
    
    
}

int main(){
    product(8.0, 90.5);



     vector<double> vect {12.5, 20, 90, 80.33};
    vector<double> vect1 {4.9, 23.0, 78, 30.44};

    multple(vect, vect1);
}

