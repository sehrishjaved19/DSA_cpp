/* 
Algorithm - GREATER NUMBER
1- START
2- INPUT three numbers X, Y, and Z
3- IF X>Y THEN
        IF X>Z THEN
            PRINT "X is greater"
        ELSE
            PRINT "Z iS greater"
        END IF
    ELSE
        IF Y>Z THEN
            PRINT "Y is greater"
        ELSE
            PRINT "Z iS greater"
        END IF
    END IF
4- END
*/

//Porgram to find greater number
#include<iostream>
using namespace std;
class Greater_no {
    private:
    int x, y, z;
    public:

    //member function to input three numbers
    int input()
    {
        cout<<"Enter first number: ";
        cin>>x;
        cout<<"Enter second number: ";
        cin>>y;
        cout<<"Enter third number: ";
        cin>>z;
    }// end of input()

    //member function to find greater number
    int test()
    {
        if(x>y)
        {
            if(x>z)
            {
                cout<<"First number is greater!";
            }
            else
            {
                cout<<"Third number is greater!";
            }
        }
        else
         {
            if(y>z)
            {
                cout<<"Second number is greater!";
            }
            else
            {
                cout<<"Third number is greater!";
            }
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