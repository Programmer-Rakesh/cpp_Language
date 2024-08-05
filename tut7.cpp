#include<iostream>
using namespace std;

// Global and local variable :

int c = 45;           // Global variable

int main(){           // Local variable
// ****************Build in Dta types****************
    int a, b, c;

    float d = 34.5f;                   // "f" means float
    long double e = 64.4l;             // "l" means long double

    cout<<"Entre the value of a : ";
    cin>>a;
    cout<<"Entre the value of b : ";
    cin>>b;
    c = a + b;
    cout<<"The sum is "<<c<<endl;
    cout<<"The global c is "<<::c<<endl;     // This line is for bringing the global c inside local variable.
    cout<<"The value of d is : "<<d<<endl<<"The value of e is : "<<e<<endl;

// ***************Float, double and long double Literals****************
    
    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;   
    cout<<"The size of 34.4 is "<<sizeof(34.4f)<<endl;   
    cout<<"The size of 34.4 is "<<sizeof(34.4F)<<endl;   
    cout<<"The size of 34.4 is "<<sizeof(34.4l)<<endl;   
    cout<<"The size of 34.4 is "<<sizeof(34.4L)<<endl;  
    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e; 

// **************Reference Variables***************

    float x = 455;
    float & y = x;
    cout<<x<<endl;
    cout<<y<<endl;

    return 0;
}

