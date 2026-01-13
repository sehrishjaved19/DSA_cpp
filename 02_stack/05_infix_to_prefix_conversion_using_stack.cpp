/*
Algorithm - Converting infix expression to prefix expression
1- START
2- Initialize an empty Stack
3- INPUT infix expression
4- Reverse the infix expression
5- Store the reverse infix expression into string variable EXP
6- C = 0
7- REPEAT Step-8 to 13 WHILE EXP[C] != NULL
8- CH = EXP[C]
9- IF CH is an operand, then add it to the output.
10- If CH is ')', then push it into stack.
11- If CH is an operator, then:
    i) If stack is empty, push operator
    ii) If stack is not empty, pop operators with higher or equal precedence
12- If CH is '(', pop until ')' is found
13- C = C + 1
14- Pop remaining operators
15- Reverse output → Prefix expression
16- END
*/

#include <iostream>
#include <ctype.h>
#include <cstring>
using namespace std;

// function prototypes
void reverse(char*, char*);
int priority(char);

// Stack class
class infix_prefix {
private:
    char stack[20];
    int top;

public:
    infix_prefix() {
        top = -1;
    }

    void scan(char[]);
    void push(char);
    char pop();
};

// push operation
void infix_prefix::push(char x) {
    top++;
    stack[top] = x;
}

// pop operation
char infix_prefix::pop() {
    char r;
    r = stack[top];
    top--;
    return r;
}

// function to convert reversed infix to postfix-like form
void infix_prefix::scan(char str_exp[]) {
    char ch, output[100], rev_output[100], temp;
    int c = 0;

    for (int i = 0; str_exp[i] != '\0'; i++) {
        ch = str_exp[i];

        // operand
        if (isalpha(ch) || isdigit(ch)) {
            output[c++] = ch;
        }

        // right parenthesis
        else if (ch == ')') {
            push(ch);
        }

        // left parenthesis
        else if (ch == '(') {
            temp = pop();
            while (temp != ')') {
                output[c] = temp;
                c++;
                temp = pop();
            }
        }

        // operator
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
    
    // reverse output to get prefix
    reverse(output, rev_output);

    cout << "Prefix expression = " << rev_output << endl;
}//end of scan 

// reverse function (SAFE – no returning local memory)
void reverse(char* src, char* dest) {
    char temp_stk[100];
    int i, j, t = -1;

    // push characters
    for (i = 0; src[i] != '\0'; i++) {
        temp_stk[++t] = src[i];
    }

    // pop in reverse order
    for (i = t, j = 0; i >= 0; i--, j++) {
        dest[j] = temp_stk[i];
    }

    dest[j] = '\0';
}

// precedence function
int priority(char op) {
    switch (op) {
        case '^': return 4;
        case '*':
        case '/': return 3;
        case '+':
        case '-': return 2;
        default: return 0;
    }
}

// main function
int main() {
    infix_prefix obj;
    char exp[100], rev_exp[100];

    cout << "Enter infix expression without spaces: ";
    cin >> exp;

    // reverse infix expression
    reverse(exp, rev_exp);

    // convert to prefix
    obj.scan(rev_exp);

    return 0;
}