#include<iostream>
using namespace std;

int main() {
    // Multiplication table for 6 (only results)
    for (int i = 1; i <= 10; i++) {
        cout << 6 * i << endl;
    }

    // Multiplication table for 6
    for (int i = 1; i <= 10; i++) {
        cout << "6 x " << i << " = " << 6 * i << endl;
    }


    for (int i = 0; i < 4; i++)
    {
        if(i==2){          
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}