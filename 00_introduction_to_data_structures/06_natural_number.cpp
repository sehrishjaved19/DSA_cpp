/* 
Algorithm - NATURAL NUMBER
1- START
2- C = 1 
3- REPEAT Steps 4 TO 5 WHILE ( C<=10)
4-    PRINT C
5-    C = C+1 
[End of Step-3 Loop]
6-END
*/

//Program to display first 10 natural numbers
#include<iostream>
using namespace std;
int main()
{
    int c=1;
    while(c<=10)
    {
        cout<<c<<endl;
        c = c+1;
    }
    return 0;
}