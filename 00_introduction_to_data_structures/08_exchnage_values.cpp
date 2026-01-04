/*
EXCHANGE(X,Y)
1- TEMP = X
2- X = Y
3- Y = TEMP
4- RETURN
*/

// Program to exchnage values
#include<iostream>
using namespace std;
class Exchnage {
    public:
    int exchange(int &x, int &y)
    {
        int t;
        t = x;
        x = y;
        y = t;
    }
};
int main()
{
    Exchnage obj;
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    obj.exchange(a,b);
    cout<<"\n Values after exchange are:\n\n";
    cout<<"Value of a = "<<a<<endl;
    cout<<"Value of b = "<<b<<endl;
    return 0;
}