#include <iostream>
using namespace std;


int main(){
    // Array example
    int marks[4] = {23, 45, 56, 89};
    // OR
    int mathmarks[4];

    mathmarks[0] = 1234;
    mathmarks[1] = 541;
    mathmarks[2] = 62344;
    mathmarks[3] = 223;

    cout<<"These are math marks :"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;

    cout<<"These are marks :"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;

    // we can change the value in mid:
    marks[2] = 999;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    // Now using for loop:

    for (int i = 0; i < 4; i++)
    {
    cout<<"The value of "<< i<<"is :"<<marks[i]<<endl;
    }

    // Pointers and arrays
    int* p = marks;
    cout<<"The value of marks[0] is :"<< *p<<endl;
    cout<<"The value of marks[1] is :"<< *(p+1)<<endl;
    cout<<"The value of marks[2] is :"<< *(p+2)<<endl;
    cout<<"The value of marks[3] is :"<< *(p+3)<<endl;

    cout<<*(p++)<<endl;   // It will print marks[0] = 23
    cout<<*(++p)<<endl;   // It will print marks[2] = 999

    return 0;
}