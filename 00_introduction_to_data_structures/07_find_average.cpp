/*
Function : MEAN(X,Y,Z)
1- AVG = (X+Y+Z)/3
2- Return(AVG)
*/

// Program to find average
#include<iostream>
using namespace std;
float mean(float x, float y, float z)
    {
        return (x+y+z)/3;
    }
int main()
{
    float a,b,c;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Enter third number: ";
    cin>>c;
    cout<<"Average is "<<mean(a, b, c)<<endl;
    return 0;
} // end of main