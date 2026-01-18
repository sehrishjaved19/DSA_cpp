/*
//Write an algorithm to sort an array 'ABC' in ascending order using the bubble sort method. The array consist of N elements.
Algorithm-Bubble Sort
1-  START
2-  SET U = N  [u represents the control variable for controlling the upper loop]
3-  REPEAT STEP-4 TO 8 WHILE(U>=1) [Start of upper loop]
4-  SET I = 1
5-  REPEAT STEP-6 TO 7 WHILE(I<=U)  [Start of inner loop]
6-  IF ABC[I] > ABC[I + 1] THEN
        TEMP = ABC[I]
        ABC[I] = ABC[I + 1]
        ABC[I+ 1] = TEMP
    END IF
7-  I = I+1 [End of inner loop]
8-  U = U-1 [End of upper loop]
9-  EXIT
*/

//Program to sort an array with 5 elements using bubble sort method.
#include<iostream>
using namespace std;
class bubble {
    private:
    int abc[5];
    public:
    void input(void);
    void sort(void);
    void print(void);
};

//member function to input data in array
void bubble::input(void) {
    cout<<"\nEnter 5 values: "<<endl;
    for(int i = 0; i<=4; i++) {
        cin>>abc[i];
    }
}

//member function to sort array
void bubble::sort(void) {
    int temp;
    for (int u = 4; u>= 1; u--) { //[outer loop for no. of passes]
        for(int i = 0; i<=4; i++) { //[inner loop for comparison]
            if(abc[i]> abc[i+1]) {
                temp = abc[i];
                abc[i] = abc[i+1];
                abc[i+1] = temp;
            }
        }
    }
}

//member function to print sorted data
void bubble::print(void) {
    cout<<"Sorted array "<<endl;
    for(int i = 0; i <=4; i++) {
        cout<<abc[i]<<"\t";
    }
    cout<<endl;
}
int main()
{
    bubble obj;
    obj.input();
    obj.sort();
    obj.print();
    return 0;
}