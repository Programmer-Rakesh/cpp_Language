#include<iostream>
using namespace std;

// Ehat is a pointer  ---->  data type which holds the address of other dat types
int main(){
    int a=3;
    int* b = &a;
    cout<<"The address of a is :"<<&a<<endl;   //
    cout<<"The address of a is :"<<b<<endl;    //
    // & --> (Address of) operator    
    // * --> Dereference operator

    return 0;
}