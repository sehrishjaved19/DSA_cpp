/*
//Write a algorithm to convert a decimal number into binary number.
Algorithm - Converting decimal number into Binary number
PUSH(STK, X)
1- START
2- Initialize an empty Stack
3- INPUT integer number in N
4- REPEAT Step-5 to Step-7 WHILE N>0
5- Divide N by 2
6- Push the remainder part of the step-5 onto the Stack
7- Store the quotient part of step-5 back into N
[End of loop of step-4] 
8- Pop all values of stack one by one and print on the screen
9- Exit
*/

// Write a program that converts a decimal integer value into binary and displays result on screen. For example, if number is 3 then the result should be displayed as (11)₂. Use the stack technique to store the remainder offf each step of division and pop the values from stack and display on the screen.
#include<iostream>
using namespace std;
class Stack {
    private:
    int top;
    int stk[15];
    public:
    Stack(void) {
        top = -1;
    }

    //prototypes of the functions of the class
    void bin(int x);
    void display(void);
};

//member function to convert number into binary and push onto stack
void Stack::bin(int x) {
    int r;
    while(x>0) {
        r = x%2;
        top = top + 1;
        stk[top] = r;
        x= x/2;
    }// end of bin
}

//member function to pop values from stack and display in binary format
void Stack::display(void) {
    cout<<"Value in binary = (";
    for(int i = top; i >= 0; i--) {
        cout<<stk[i];
    }
    cout<<")2";
}// end of display
int main()
{
     Stack obj;
     int n;
     cout<<"Enter an integer value: ";
     cin>>n;
     obj.bin(n);
     obj.display();
    return 0;
}