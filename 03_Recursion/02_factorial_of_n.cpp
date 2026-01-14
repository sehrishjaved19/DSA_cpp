#include<iostream>
using namespace std;

int factorial(int n) {
    if (n==0) {
        return 1;
    }
    else
    return n*factorial(n-1);
}
int main()
{
    cout<<"The factorial of given number "<<"is "<<factorial(5)<<"!"<<endl;
    return 0;
}