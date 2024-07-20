#include<iostream>
using namespace std;

// Global and local variable :

int c = 45;           // Global variable

int main(){           // Local variable
    int a, b, c;
    float d = 34.5;
    long double e = 34.4;
    cout<<"Entre the value of a : ";
    cin>>a;
    cout<<"Entre the value of b : ";
    cin>>b;
    c = a + b;
    cout<<"The sum is "<<c<<endl;
    cout<<"The global c is "<<::c<<endl;     // This line is for bringing the global c inside local variable.
    cout<<"The value of d is : "<<d<<endl<<"The value of e is : "<<e;

    return 0;
}

