/*
//Write an algorithm to evaluate a postfix expression
Algorithm- Evaluation of Postfix Expression
1- START
2- Initialize an empty stack
3- INPUT postfix expression into string variable EXP
4- C=0
5- REPEAT Step-6 to 9 WHILE[C]!= '\0'
6- CH = EXP[C]
7-IF CH is an operand, then push operand onto the stack
8- IF CH is an operator, then: 
    i) POP top two operands of the stack
    ii) Perform arithmetic operation on the operands(second top operand, operator, first top operand.)
    iii) Push the computed result onto the stack.
9- C = C+1
[end of step-5 loop]
10- POP computed result from the stack
11-Print the computed result
12- END
*/

// Program to evaluate the postfix expression
#include<iostream>
#include<ctype.h>
#include<math.h>
using namespace std;

//prototype of function to convert a character digit to a numeric digit
int character_to_value(char);

//prototype of function to perform arithmetic operation
int operation(int, char, int);

class postfix {
    private:
    int stack[50];
    int top;
    public:
    postfix () {
        top = -1;
    }
    void scan(char[]);
    void push(int);
    int pop(void);
};

//member function to Read an expression
void postfix::scan(char str_exp[]) {
    int temp, v1, v2, temp_val, res = 0;
    char ch;

    for (int i = 0; str_exp[i] != '\0'; i++) {
        ch = str_exp[i];

        // if ch is digit(operand), convert it into numeric digit and then push onto stack1(stack for operand))
        if (isdigit(ch)) {
            temp_val = character_to_value(ch);
            push(temp_val);
        }

        // if ch is alphabet(operand), input value for it and then push onto stack(stack for operand))
        else if(isalpha(ch)) {
            cout<<"Enter value for "<<ch<<":";
            cin>>temp_val;
            push(temp_val);
        }


        else if(ch == '^' || ch == '*' || ch == '/' || ch == '+' || ch == '-') {
            v1 = pop(); //remove first value from stack
            v2 = pop(); //remove second value from stack
            res = operation(v2, ch, v1);
            push(res);
        }
    }
    cout <<"Final result = " <<pop();
}//end of scan 

//member function to push operand onto stack
void postfix::push(int n) {
    top++;
    stack[top] = n;
}//end of push()

//member function to remove operands onto stack
int postfix::pop(void) {
    return stack[top--];
}//end of pop()

//definition of function to perform arithmetic operation
int operation(int x, char op, int y) {
    int res;
    switch(op)
    {
        case '*':
        res = x * y;
        break;
        case '/':
        res = x / y;
        break;
        case '+':
        res = x + y;
        break;
        case '-':
        res = x - y;
        break;
        case '^':
        res = pow(x,y);
        break;
    }
    return res;
}// end of operation()

//definition of function to convert charater digit into numeric digit
int character_to_value(char x) {
    int val;
    switch(x)
    {
        case '0':
        val = 0 ;
        break;
        case '1':
        val = 1 ;
        break;
        case '2':
        val = 2 ;
        break;
        case '3':
        val = 3 ;
        break;
        case '4':
        val = 4 ;
        break;
        case '5':
        val = 5 ;
        break;
        case '6':
        val = 6 ;
        break;
        case '7':
        val = 7 ;
        break;
        case '8':
        val = 8 ;
        break;
        case '9':
        val = 9 ;
        break;
    }
    return val;
}//end of character_to_val()
int main()
{
    postfix s1;
    char exp[100];
    cout<<"Enter postfix expression without spaces: ";
    cin>>exp;
    s1.scan(exp);
    return 0;
}