/*
1- START
2- INPUT N
3- C=1
4- REPEAT STEP 5 TO 6 WHILE (C<=N)
5- PRINT C
6- C = C+2
   [End of step-4 loop]
7- END
*/

// Program to display odd numbers of first n natural numbers
#include<iostream>
using namespace std;
int main()
{
    int n;
    int c = 1;
    cout<<"Enter the value for N: ";
    cin>>n;
    while(c<=n)
    {
        cout<<c<<endl;
        c = c+2;
    }
    return 0;
}