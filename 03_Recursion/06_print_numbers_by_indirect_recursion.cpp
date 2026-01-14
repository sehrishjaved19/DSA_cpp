//Pogram to print natural numvers from 1 to 10 using indirect recursion.
#include<iostream>
using namespace std;
class AB {
    public:

    // This member function prints n, increments n by 1 and call B
    void A(int n) {
        if (n<=10) {
            cout<<n<<" ";
            n++;
            B(n);
        }
        else
        return;
    }

    //This member function prints n, increments n by 1, and calls A
    void B(int n) {
        if (n<=10) {
            cout<<n<<" ";
            n++;
            A(n);
        }
        else
        return;
    }
};
int main()
{
    AB obj;
    obj.A(1);
    return 0;
}