#include <iostream>
#include <cmath>

using namespace std;

bool perfect(int num) {
   if (sqrt(num) * sqrt(num) == num){
    return true;
   } else {
    return false;
   }
    

}

int main() {
    cout << perfect(25);
    cout << perfect(45);
}