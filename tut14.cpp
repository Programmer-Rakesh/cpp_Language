#include <iostream>
using namespace std;

typedef struct employee
{
    int eID;
    char favChar;
    float salary;
} ep;
union money
{
    int rice;
    char car;
    float pounds;
};

int main()
{
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<(m1==1);       //This is true so it will print 1
    // cout<<(m1==3);    This is false so it will print 0

    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;
    
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.rice;

    // ep harry;
    // harry.eID = 1;
    // harry.favChar = 'c';
    // harry.salary = 120000;
    // cout << harry.salary << endl;
    // cout << harry.favChar << endl;

    return 0;
}

