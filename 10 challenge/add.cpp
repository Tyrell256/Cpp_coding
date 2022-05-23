#include <iostream>
#include <vector>

using namespace std;


int adding(int num1, int num2 ) {
    return num1 + num2;

}
void add_vectors(vector<int> vect, vector<int> vect2) {

    vector<int> vect3;
        for (int i = 0; i < vect.size(); i++)
        {
            vect3.push_back(vect[i] + vect2[i]);
            
        }
        for (int j : vect3)
        {
            cout << j << " ";

            
        }
        
        

}

int main() {

    vector<int> num{10, 20, 40};
    vector<int> num2{50, 60, 80};

    add_vectors(num, num2);

    return 0;

   
}