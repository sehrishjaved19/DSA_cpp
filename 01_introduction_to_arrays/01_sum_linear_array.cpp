/*
Algorithm - Sum of linear array
1- START
2- INPUT VALUES IN ARRAY XYZ
3- SUM = 0
4- REPEAT FOR C 0 TO 4 BY 1
      SUM = SUM +XYZ[C]
      [E nd of loop]
5- PRITN SUM
6-END
*/

// Program to compute the sum of array
#include<iostream>
using namespace std;
class Sum {
    private:
    int xyz[5], s;
    public:
    Sum()
    {
        s = 0;
    }
    int input() //member function to input data into array
    {
        cout<<"Enter 5 values & press Enter after typing each value\n";
        for(int i = 0; i<=4; i++)
        {
            cin>>xyz[i];
        }
    }
    int compute_sum()
    {
        for(int i = 0; i<=4; i++)
        {
            s = s + xyz[i];
        }
        cout<<"Sum = "<<s;
    }
};
int main()
{
    Sum obj;
    obj.input();
    obj.compute_sum();
    return 0;
}