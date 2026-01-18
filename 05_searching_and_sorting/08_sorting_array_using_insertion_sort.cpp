/*
//Write an algorithm to sort an array 'ABC' in ascending order using the insertion sort method. The array consist of N elements.
Algorithm-insertion Sort
1-  START
2-  INPUT values in array ABC
2-  SET U = 0  [u represents the control variable for controlling the upper loop]
3-  REPEAT STEP-4 TO 8 FOR U = 1 TO N-1           [Start of upper loop]
4-  VAL = ABC[U]
5-  I = U
6-  REPEAT STEP-7 TO 8 WHILE(I>0 AND VAL<ABC[I-1])
7-  ABC[I] = ABC[I-1]
        I = I-1
        [End of STEP-6 inner loop]
8-  ABC[I] = VAL       [End of upper loop]
9-  EXIT
*/

//Program to sort an array with 5 elements using insertion sort method.
#include<iostream>
using namespace std;

class insertion {
private:
    int abc[5];

public:
    void input(void);
    void sort(void);
    void print(void);
};

// member function to input data
void insertion::input(void) {
    cout << "\nEnter 5 values: " << endl;
    for(int i = 0; i < 5; i++) {
        cin >> abc[i];
    }
}

// member function to sort array
void insertion::sort(void) {
    int val, i, u;
    for(u = 1; u < 5; u++) {
        val = abc[u];
        for(i = u; i > 0 && val < abc[i-1]; i--) {
            abc[i] = abc[i-1];   // shift right
        }
        abc[i] = val;           // insert value
    }
}

// member function to print sorted array
void insertion::print(void) {
    cout << "Sorted array:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << abc[i] << "\t";
    }
    cout << endl;
}

int main() {
    insertion obj;
    obj.input();
    obj.sort();
    obj.print();
    return 0;
}
