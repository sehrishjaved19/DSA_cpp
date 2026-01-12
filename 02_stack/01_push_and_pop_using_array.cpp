/*
//Write a procedure sub-algorithm to push data item X into stack 'STK' which can store N elements.
Procedure Algorithm - Pushing Item
PUSH(STK, X)
1- [Check stack whether it has space or not]
    IF TOP >= N THEN 
        PRINT "Stack overflow"
        RETURN
    END IF
2- [Insert value X in stack]
    TOP = TOP + 1
    STK[TOP] = X
3- EXIT

---------------------------------------

//Write a procedure sub-algorithm to remove adata item from a stack 'STK' which has N elements.
Procedure Algorithm - Poping Item
POP(STK, TOP)
1- [Check stack if it is empty]
    IF TOP = 0 THEN
        PRINT"Stack underflow"
        RETURN
    END IF
2- [Remove data itme from stack]
    STK[TOP] = NULL
    TOP = TOP - 1
3- EXIT
*/

//Program to push and pop items in stack
#include<iostream>
using namespace std;

class Stack {
private:
    int top;
    int stk[5]; // stack size = 5
public:
    Stack() {   // constructor
        top = -1;
    }

    void push(int);
    void pop();
    void display();
};

// push function
void Stack::push(int x) {
    if (top == 4) {
        cout << "Stack overflow (stack is filled!)\n";
        return;
    }
    top++;
    stk[top] = x;
}

// pop function
void Stack::pop() {
    if (top == -1) {
        cout << "Stack is empty\n";
        return;
    }
    int val = stk[top];
    stk[top] = 0; // optional
    top--;
    cout << "Value " << val << " is removed\n";
}

// display function
void Stack::display() {
    if (top == -1) {
        cout << "Stack is empty\n";
        return;
    }
    cout << "Stack values (top to bottom):\n";
    for (int x = top; x >= 0; x--)
        cout << stk[x] << endl;
}

// main function
int main() {
    Stack st;
    int n, opt;
    int loop = 1; 

    while (loop) {
        cout << "Enter 1 to Push in stack\n";
        cout << "Enter 2 to Pop from stack\n";
        cout << "Enter 3 to Display the stack\n";
        cout << "Enter 4 to Exit\n";
        cout << "Enter your option [1-4]: ";
        cin >> opt;

        switch (opt) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> n;
                st.push(n);
                break;
            case 2:
                st.pop();
                break;
            case 3:
                st.display();
                break;
            case 4:
                loop = 0;
                break;
            default:
                cout << "Invalid option!\n";
        }//end of switch
    }//end of while

    return 0;
}//end of main
