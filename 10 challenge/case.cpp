#include <iostream>
#include <cstring>

using namespace std;

void case_change(string sent ) {
    char p[sent.length()];
    for (int i = 0; i < sizeof(p); i++)
    {
        sent[i]=p[i];
    }
        
        for (int j = 0; j < sizeof(p); j++)
        {
            p[j] = p[j] - 32;
            cout << p[j];
        }
        
    
    
}

int main() {
    string s("i am great");
    case_change(s);


   
}