#include<iostream>
using namespace std;

int main(){
    /*for (int i = 0; i < 4; i++)
    {
        //cout<<i<<endl;    // This will print numbers 0,1,2,3
        if(i==2){           //  This will skip 2
            break;          // Use break if u want to stop at before 2
        }
        cout<<i<<endl;        
    }*/
    for (int i = 0; i < 4; i++)
    {
        if(i==2){             // This will skip 2
            continue;         // This will continue even after skipping 2
        }
        cout<<i<<endl;        // This will print 0,1,3
    }
    
    return 0;
}
