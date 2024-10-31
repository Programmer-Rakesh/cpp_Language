#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a = 34;
    char b = 'b';
    cout<<"The value of a was: "<<a<<endl;
    cout<<"The value of b was: "<<b<<endl;
    a = 45;
    b = '4';
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;

    //By chance we dont want to change the value, w'll use constant
    //Constant in c++
    //const int d = 3;
    //cout<<"The value of d is: "<<d<<endl;
    //d = 45;   //You will get an error because d is a constant
    //cout<<"The value of d is: "<<d<<endl;

    // Manipulators in c++
    int c = 3, d=78, e=1233;
    cout<<"The value of c without setw is: "<<c<<endl;
    cout<<"The value of d without setw is: "<<d<<endl;
    cout<<"The value of e without setw is: "<<e<<endl;
    //See the difference
    cout<<"The value of c with setw is: "<<setw(4)<<c<<endl;
    cout<<"The value of d with setw is: "<<setw(4)<<d<<endl;
    cout<<"The value of e with setw is: "<<setw(4)<<e<<endl;
    
    // Operator precedence :-
    int x =3, y=4;
    //int z = (x*5)+y;
    int z = ((((a*5)+y)-45)+87);
    cout<<z<<endl;

    return 0;
}    