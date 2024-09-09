#include<iostream>
using namespace std;

int main(){
    /* Loops in c++ :
    There are thre types of loops in c++ :
        1. For loop
        2. While loop
        3. do-While loop
    */
   // For loop in c++ :
   // int i=1
   // cout<<i;
   // i++;


   // Syntax for for-loop:
   // for (initialization; condition; updation)
   // {
   //     loop body(c++ code);
   // }


   for (int i = 0; i < 40; i++)
   {
    cout<<i<<endl;
   }


   /* Example for infinite for-loop:
   for (int i = 1; 34 <= 40; i++)
   {
     cout<<i<<enbdl;
   }
   */

  /* While loop in c++
  // Syntax:
  while(condition):
  {
    c++ statement;
  }
  */

 // Example of infinite while-loop:
 int i=1;
 while(true){
    cout<<i<<endl;
    i++;
 }

// Printing 1 to 40 using while loop:
int i=1;
while(i<=40){
    cout<<i<<endl;
    i++;
}  

   return 0;
}