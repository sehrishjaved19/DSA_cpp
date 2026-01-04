/*
1- START
2- INPUT N
3- SUM = 0
4- REPEAT STEP 5  FOR I = 1 TO N BY 1
5-     IF (I MOD 2 = 0)
           SUM = SUM + I
       END IF
[END OF STEP 4 LOOP]
6- PRINT SUM
7- END
*/

// Program to display the sum of even numbers of first N natural numbers.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a natural number: ";
    cin>>n;
    int sum =0;
    for (int i = 1; i<=n; i++)
    {
        if(i%2 == 0){
            sum = sum + i;
        }
    }
    cout<<"Sum of even numbers is "<<sum<<"!";
    return 0;
}