#include<iostream>
using namespace std;

void print_num(int n) { //recursive function
    if(n <= 1) { // base criteria
        return 1;
    }
    else
    {
        cout<<n<<endl;
        print_num(n-1); // calling itself(progressive apporach/recursive case)
    }
}
int main()
{
    print_num(5);
    return 0;
}