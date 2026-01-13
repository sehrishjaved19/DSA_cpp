/*
//Write an algorithm to convert infix expression to postfix expression.
Algorithm - Converting infix to postfix expression
1- START
2- Initialize an empty Stack
3- INPUT infix expression and store it in variable EXP
4- C = 0
5- REPEAT Step-6 to 11 WHILE EXP[C] != NULL
[Read all the elements or symbols one by one from left to right in a given infix expression untill end of expression]
6- CH = EXP[C]
7- IF CH is an operand, then add it to the output.
8- If CH is a left parenthesis '(', then push it into stack.
9- If CH is an operator, then;
    i) If stack is empty, then push read operator onto the stack.
    ii) If stack is not empty,then check the precedence of the top operator of stack with the read operator. If the precedence of the top operator is higher or same than the read operator, then pop the operator from the stack and add to the output. Repeat this step (step-ii) for the next top operators of stack one by one. At the end of this step (i.e., step-ii), push the read operator onto the stack.
    [Please note that left parenthesis in stack is assumed to have lower precedence than that of all other operators.]
10- If CH is right paraenthesis')', then pop all operators from the stack untill the respective left paraenthesis is encountered and add each poped operator to the output. Do not add ')' to the output, simply discard it.
11- C = C+1
[End of Step-5 loop]
12- When the end of the infix expression is reached , pop all operators from the stack and add each popped operator to the output in the same precedence.
*/

//Program that converts infix expression into postfix expression.
#include<iostream>
#include<ctype.h>
using namespace std;

//prototype of function to check precedence of operator
int priority(char);


class infix_postfix {
    private:
    char stack[20];
    int top;
    public:
    infix_postfix() { // constructor to initialize empty stack
        top = -1;
    }
    void scan(char[]);
    void push(char);
    char pop(void);
};

// member function to read an expression and convert into postfix expression
void infix_postfix::scan(char str_exp[]) 
{
    char ch, output[80], temp;
    int c = 0;
    for(int i = 0; str_exp[i] != '\0'; i++) 
    {
        ch = str_exp[i];

        //if ch is an operand, then add it to the output.
        if(isalpha(ch) || isdigit(ch)) {
            output[c] = ch;
            c++;
        }

        // if ch is left parenthesis '(' the push it into stack
        else if(ch == '(') 
        {
            push(ch);
        }

        //pop all elements from stack if right parenthesis is read and add to output.
        else if(ch == ')') {
            temp = pop();
            while(temp != '(') {
                output[c] = temp;
                c++;
                temp = pop();
            }
        }

        //if ch is an operator, then push or pop this operator onto or from the stack on the basis of precedence.
        else if(ch == '^' || ch == '*' || ch == '/' || ch == '+' || ch == '-') {

            //push operator onto the stack if it is empty
            if(top == -1) {
                push(ch);
            }

            //if stack is not empty then repeatedly pop those operators from stack that has higher or same precedence from read operator, After this push read operator onto stack.
            else
            {
                int op_ch;
                op_ch = priority(ch);
                while(priority(stack[top]) >= op_ch && top != -1)
                {
                    temp = pop();
                    output[c] = temp;
                    c++;
                }
                push(ch);
            }
        }
    }//end of loop that reads string of expression

    //at the end of expression read, pop all operators from stack and add to output
    int j;
    for( j = c; top>= 0; j++)
        output[j] = pop();
    output[j] = '\0';
    cout<<"Postfix expression = "<<output;
}//end of scan 

// member function to push operator onto the stack
void infix_postfix::push(char x) {
    top++;
    stack[top] = x;
}//end of push

//member function to remove operators from the stack
char infix_postfix::pop(void) {
    char r;
    r = stack[top];
    top--;
    return r;
}// end of pop

//definition of function to check precedence of operator
int priority(char op) {
    switch(op) {
        case '^':
            return 4;
        break;
        case '*':
        case '/':
            return 3;
        break;
        case '+':
        case '_':
            return 2;
        break;
        default:
        return 0;
    }
}

//main function
int main()
{
    infix_postfix obj;
    char exp[100];
    cout<<"Enter infix expression without spaces: ";
    cin>>exp;
    obj.scan(exp);
    return 0;
}//end of main 
