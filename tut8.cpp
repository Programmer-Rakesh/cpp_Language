#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a = 34;
    char c = 'c';
    cout<<"The value of a was: "<<a<<endl;
    cout<<"The value of c was: "<<c<<endl;
    a = 45;
    c = '4';
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of c is: "<<c<<endl;

    //By chance we dont want to change the value, w'll use constant
    //Constant in c++
    const int d = 3;
    //cout<<"The value of d is: "<<d<<endl;
    //d = 45;   //You will get an error because d is a constant
    //cout<<"The value of d is: "<<d<<endl;
    return 0;
}