#include<iostream>
using namespace std;

// What is a pointer?  ---->  Data type which holds the address of other data types
int main(){
    int a=3;
    int* b = &a;
    b = &a;

    // & --> (Address of) operator
    cout<<"The address of a is :"<<&a<<endl;   
    cout<<"The address of a is :"<<b<<endl; 

    // * --> (Value at) Dereference operator
    cout<<"The value at address b is "<<*b<<endl;   // It will give result "3"

    return 0;
}