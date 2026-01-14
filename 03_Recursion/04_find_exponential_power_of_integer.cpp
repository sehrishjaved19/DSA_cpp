//Program to find the exponential power of an integer using recursion.
#include<iostream>
using namespace std;
class Exponent {
    public:

    //member function to finf exponential power
    int power(int b, int n) {
        if (n == 0) {
            return 1;
        }
        else 
        {
            return b*power(b, n-1);
        }
    }//end of power()
};
int main()
{
    Exponent obj;
    int val, p, res;
    cout<<"Enter an interger value: ";
    cin>>val;
    cout<<"Enter value for exponent: ";
    cin>>p;
    res = obj.power(val, p);
    cout<<"Result = "<<res;
    return 0;
}