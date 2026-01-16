/*
// Write an algorithm that finds the largest value in an arrat "XYZ" consisting of 5 elements.
Algorithm-Searching the lardgest value
1- START
2- INPUT five values in XYZ array
3- [Assign value of first element of array to MAX, and 1 to C]
   MAX = XYZ[0], C = 1
4- REPEAT Step-5 WHILE C<=4   [Loop that searches maximum value in the array.]
5- IF MAX = XYZ[C] TEN
        MAX = XYZ[C]
        C = C+1
   END IF [End of step-4 loop]
6- PRINT MAX
7- EXIT
*/

//Program to find the largest value in an array using sequential search method
#include<iostream>
using namespace std;
class max_value {
    private:
    int xyz[5];
    public:
    void input(void);
    int search(int&);
};

void max_value::input(void) {
    cout<<"Enter 5 values "<<endl;
    for(int i = 0; i<= 4; i++) {
        cin>>xyz[i];
    }
}//end of input()

//member function to find the largest value and its location in an array
int max_value::search(int &loc) 
{
    int m, i = 0;
    m = xyz[0];
    while(i<=4) 
    {
        if(m<xyz[i]) 
        {
            m = xyz[i];
            loc = i+1;
        }
        i++;
    }//end of while loop
    return m;
}
int main()
{
    max_value obj;
    int pos, max;
    obj.input();
    max = obj.search(pos);
    cout<<"The largest value is: "<<max<<" , which is present at location = "<<pos;
    return 0;
}