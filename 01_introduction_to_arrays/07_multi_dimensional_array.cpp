// Write a program that inputs data into a table and displays on the screen oinntabular form.
#include<iostream>
using namespace std;
int main() {
    int table[3][4];
    int row, col;
    row = 0;

    //input values in table
    while(row<=2)
    {
        for(col = 0; col <=3; col++)
        {
            cout<<"Enter value for row "<<row<<" and column "<<col<<":";
            cin>>table[row][col];
        }
        row++;
    }

    //display values from table
    cout<<"\n Values in tabular form" <<endl;
    for(row = 0; row<=2; row++)
    {
        for(col = 0; col <=3; col++ ) {
            cout<<table[row][col]<<"\t";
        }
        cout<<endl;
    }
     return 0;
}