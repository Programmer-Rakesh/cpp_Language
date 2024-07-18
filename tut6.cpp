#include<iostream>
using namespace std;

int main(){
    int a =4, b=5;
    cout <<"Operators in c++ :"<<endl;
    cout <<"Following are the types of Arithmetic operators in c++"<<endl;
    // Arithmetic Operators :-
    cout <<"The value of a + b is "<< a+b<<endl;
    cout <<"The value of a - b is "<< a-b<<endl;
    cout <<"The value of a * b is "<< a*b<<endl;
    cout <<"The value of a / b is "<< a/b<<endl;
    cout <<"The value of a % b is "<< a%b<<endl;
    cout <<"The value of a ++ b is "<< a++<<endl;
    cout <<"The value of a -- is "<< a--<<endl;
    cout <<"The value of  ++a is "<< ++a<<endl;
    cout <<"The value of  --a is "<< --a<<endl;

    // Assignment Operators --> used to ssign values to variables.
    // int a = 3, b = 9;
    // char d = 'd';

    // Comparison Operators :
    cout<<"Following are the types of comparison operators in c++"<<endl;
    cout<<"The value of a == b is "<< (a==b)<<endl;
    cout<<"The value of a != b is "<< (a!=b)<<endl;
    cout<<"The value of a >= b is "<< (a>=b)<<endl;
    cout<<"The value of a <= b is "<< (a<=b)<<endl;
    cout<<"The value of a > b is  "<< (a>b) <<endl;
    cout<<"The value of a < b is  "<< (a<b) <<endl;

    // Togical Operators :
    cout<<"Following are the logical iperators in c++"<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is : " <<((a==b) &&(a<b))<<endl;
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is :  " <<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical not ope4rator (!(a==b)) is : "<<(!(a==b))<<endl;
    
    return 0;
}
