//Write a program that initialize values in two tables A and B and adds tables A and B and stores result into table C.
#include<iostream>
#include<string>
using namespace std;

//definition of addition() function
void addition(int X[3][3], int Y[3][3], int Z[3][3]) {
    int r, c;
    for (r = 0; r<=2; r++) {
        for (c = 0; c<=2; c++) {
            Z[r][c] = X[r][c] + Y[r][c];
        }
    }
}

//definition of print() function
void print(char str[], int R[3][3]) {
    int r, c;
    cout<<endl<<str<<endl;
    for(r = 0; r<=2; r++) {
        for(c = 0; c<=2; c++) {
            cout<<R[r][c]<<"\t";
        }
        cout<<endl;
    }
}

//main function
int main()
{
    int A[3][3] = {{2,3,8},{5,8,3},{2,6,3}};
    int B[3][3] = {{2,3,1},{6,1,2},{6,2,1}};
    int C[3][3];
    void addition(int[3][3], int[3][3], int[3][3]);
    void print(char[15], int[3][3]);
    addition(A,B,C);
    print("Matrix A:", A);
    print("Matrix B:", B);
    print("addition of A & B:", C); 
    return 0;
}