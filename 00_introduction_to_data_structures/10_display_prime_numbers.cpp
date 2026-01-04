/*
1- START
2- INPUT N
3- I=2
4- REPEAT STEP 5 TO 12 WHILE (I<=N)
5-     COUNT = 0
6-     J = 1
7-     REPEAT STEP 8 TO 9 WHILE (J<=I)
8-        IF (I MOD J = 0)
            COUNT = COUNT + 1
          END IF
9-        J = J+1
       [END OF STEP-7 LOOP]
10-    IF (COUNT = 2)
           PRINT I
       END IF
11-    I = I+1
[END OF STEP-4 LOOP]
12-END
*/

// Program to display odd numbers of first n natural numbers
#include<iostream>
using namespace std;
int main()
{
    int n;
    int i = 2;
    cout<<"Enter the value for N: ";
    cin>>n;
    while(i<=n)
    {
        int count = 0;
        int j = 1;
        while(j<=i)
        {
            if(i%j == 0)
            {
                count = count + 1;
            }
            j = j+1;
        }
        if (count == 2)
        {
            cout<<i<<endl;
        }
        i = i+1;
    }
    return 0;
}