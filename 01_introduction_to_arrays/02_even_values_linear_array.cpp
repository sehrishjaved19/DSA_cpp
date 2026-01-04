/*
Algorithm - Even values of linear array
1- START
2- REPEAT step-3 FOR C = 0 TO 4 BY 1
3- IF XYZ[C]%2 = 0 THEN
    PRINT XYZ[C]
   END IF
   [End of loop]
6-END
*/

// Program to find out the even values of the array
#include<iostream>
using namespace std;
class Even {
    private:
    int xyz[5];
    public:

    int input() //member function to input data into array
    {
        cout<<"Enter 5 values & press Enter after typing each value\n";
        for(int i = 0; i<=4; i++)
        {
            cin>>xyz[i];
        }
    }
    int even_no()
    {
        cout<<"Even values are as under:\n";
        for(int i = 0; i<=4; i++)
        {
            if(xyz[i]%2 == 0)
        {
            cout<<xyz[i]<<endl;
        }
        }
    }
};
int main()
{
    Even obj;
    obj.input();
    obj.even_no();
    return 0;
}