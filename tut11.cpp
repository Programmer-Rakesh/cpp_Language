#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 4; i++)
    {
        //cout<<i<<endl;      // This will print numbers 0,1,2,2
        if(i==2){           // Use break if u want to stop at 3.
            break;
        }
        cout<<i<<endl;
    }

    return 0;
}
