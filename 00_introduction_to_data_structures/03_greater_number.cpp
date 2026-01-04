/* 
Algorithm - GREATER NUMBER
1- START
2- INPUT two numbers X and Y
3- IF X>Y THEN
        PRINT "X is greater"
    ELSE
        PRINT "Y is greater"
    END IF
4- END
*/

//Porgram to find greater number
#include<iostream>
using namespace std;
class Greater_no {
    private:
    int x, y;
    public:

    //member function to input two numbers
    int input()
    {
        cout<<"Enter first number: ";
        cin>>x;
        cout<<"Enter second number: ";
        cin>>y;
    }// end of input()

    //member function to find greater number
    int test()
    {
        if(x>y)
        {
            cout<<"First number is greater!";
        }
        else
        {
            cout<<"Second number is greater!";
        }
    }//end of test()
};
int main()
{
    Greater_no obj;
    obj.input();
    obj.test();
    return 0;
}//end of main