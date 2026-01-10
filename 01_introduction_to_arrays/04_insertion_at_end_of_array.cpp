/*
Algorithm - Insertion at end
1- START
2- REPEAT step-3 TO 4 FOR I = 3 TO 9 BY 1
3-  INPUT values in N
4-   ABC[I] = N
   [End STEP-2 loop]
5-END
*/

// Program to insert values in array
#include<iostream>
using namespace std;
class Temp {
    private:
    int abc[10];
    public:

    Temp() {                    // constructor to avoid garbage value
        for(int i = 0; i < 10; i++) {
            abc[i] = 0;          // initialize all
        }
    }

    void assign() //member function to input data into array
    {
        abc[0] = 66;
        abc[1] = 70;
        abc[2] = 36;  
    }
    void insert()
    {
        cout<<"Enter 7 values & press Enter after typing each value\n";
        for(int i = 3; i<=9; i++)
        {
            cin>>abc[i];
        }
    }
    void display()
    {
        for(int i = 0; i<=9; i++)
        {
            cout<<abc[i]<<endl;
        }
    }
};
int main()
{
    Temp obj;
    obj.assign();
    obj.insert();
    cout<<"Values in Array "<<endl;
    obj.display();
    return 0;
}