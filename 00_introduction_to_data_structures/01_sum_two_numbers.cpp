/* 
Algorithm - SUM
1- START
2- INPUT first number in A
3- INPUT second number in B
4- [Add A to B and store result in S]
   S=A+B
5- PRINT S
6- END
*/

// Program to add two numbers
#include<iostream>
using namespace std;
class Add {
    private:
    int a, b, s;
    public:
    //member function to input two numbers
    int input()
    {
        cout<<"Enter first number: ";
        cin>>a;
        cout<<"Enter second number: ";
        cin>>b;
    }// end of input()

    //member function to add two numbers and print the result
    int print()
    {
        s = a+b;
        cout<<"SUM = "<<s;
    }// end of print()
};
int main()
{
    Add obj;
    obj.input();
    obj.print();
    return 0;
} // end of main()