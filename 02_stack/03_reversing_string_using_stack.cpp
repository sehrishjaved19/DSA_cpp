/*
//Write an algorithm to reverse a given string using stack.
Algorithm - Reversing string
1- START
2- Initialize an empty Stack
3- INPUT aa string 
4- Push all characters of the string one by one onto the stack
5- Pop all characters from the stacvk one by one and add them to the output string
6- Print the output string
7- Exit
*/

// Write a program that reverses an input string using stack and displays the result on the screen. For example, if the input string is "ABCXYZ", it should be displayed as ZYXCBA.
#include<iostream>
using namespace std;
class Stack {
    private:
    int top;
    char stk[25];
    public:
    Stack(void) { // constructor
        top = -1; // inilialize an empty stack
    }

    //prototypes of the functions of the class
    void push_str(char x[]);
    void pop_str(void);
};

//member function to push characters of string onto the stack
void Stack::push_str(char x[]) {
    for (int i = 0; x[i] != '\0'; i++) {
        top ++;
        stk[top] = x[i];
    }
}// end of push_str()

//member function to pop characters of string from stack & display in reverse order.
void Stack::pop_str(void) {
    cout<<"String in reverse order is: ";
    for (int i = top; i>=0; i--) {
        cout<<stk[i];
    }
}// end of pop_str() function
int main()
{
    Stack obj;
    char str[25];
    cout<<"Enter a string: ";
    cin>>str;
    obj.push_str(str);
    obj.pop_str();
    return 0;
}