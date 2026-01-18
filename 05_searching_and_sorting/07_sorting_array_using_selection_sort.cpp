/*
//Write an algorithm to sort an array 'ABC' in ascending order using the selection sort method. The array consist of N elements.
Algorithm-Selection Sort
1-  START
2-  SET U = 0  [u represents the control variable for controlling the upper loop]
3-  REPEAT STEP-4 TO 10 WHILE(U < N) [Start of upper loop]
4-  MINI = ABC[U]
5-  I = U
6-  REPEAT STEP-7 TO 8 WHILE(I<=N)
7-  IF MINI > ABC[I] THEN
        MINI = ABC[I]
        LOC = I
    END IF
8-  I = I+1 [End of inner loop]
9-  [Interchange values]
    TEMP = ABC[LOC]
    ABC[LOC] = ABC[U] 
    ABC[U] = TEMP
10- U = U+1 [End of upper loop]
11- EXIT
*/

//Program to sort an array with 5 elements using selection sort method.
#include<iostream>
using namespace std;
class selection {
    private:
    int abc[10];
    public:
    void input(void);
    void sort(void);
    void print(void);
};

//member function to input data in array
void selection::input(void) {
    cout<<"\nEnter 5 values: "<<endl;
    for(int i = 0; i<=4; i++) {
        cin>>abc[i];
    }
}

//member function to sort array
void selection::sort(void) {
    int mini, temp, loc;
    for(int u = 0; u<4; u++) {
        mini = abc[u];
        loc = u;
        for(int i = u; i<=4; i++) {
            if (mini>abc[i]) {
                mini = abc[i];
                loc = i;
            }
        }
        //swap
        temp = abc[loc];
        abc[loc] = abc[u];
        abc[u] = temp;
    }
}

//member function to print sorted data
void selection::print(void) {
    cout<<"Sorted array "<<endl;
    for(int i = 0; i<=4; i++) {
        cout<<abc[i]<<"\t";
    }
    cout<<endl;
}
int main()
{
    selection obj;
    obj.input();
    obj.sort();
    obj.print();
    return 0;
}