/*
// Write an algorithm that finds the factorial of a given integer using a loop statement.
Alogorithm- Computing Factorial of a number
1- START
2- INPUT integer number in varable N
3- IF N = 0
    FACTORIAL = 1
    PRINT "Factorial = ", FACTORIAL
    RETURN
   END IF
4- FACTORIAL = 1
   REPREAT FOR C = 1 TO N BY 1
        FACTORIAL = FACTORIAL*C
[End of loop]
5- Print "Factorial = ", Factorial
6- END
*/

//Program to find the factorial of a given number using loop statement
#include<iostream>
using namespace std;
class Factorial {
    public:

    //member function to compute factorial
    int fact(int n) {
        int f = 1;
        if (n == 0) {
            return f;
        }
        else 
        {
            for(;n>1;n--)
            {
                f = f*n;
            }
        }
        return f;
    }// end of factorial
};
int main()
{
    Factorial obj;
    int val, res;
    cout<<"Enter value to find factorial: ";
    cin>>val;
    res = obj.fact(val);
    cout<<"Factorial of "<<val<<" is = "<<res;
    return 0;
}