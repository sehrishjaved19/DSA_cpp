/*
// Write a function sub-algorithm that finds the greater commom divisor of give numbers using resursive function.
Function: gcd(m,n)
GCD(M,N)
1- IF M<N THEN
        CALL GCD(N,M)
        RETURN
2- R = M % N
   IF R ==0 THEN
        RETURN N
   ELSE
        CALL GCD(N,R)
        RETURN
   END IF
[In the above sub-algorithm, the function GCD calls itself to calculate the gcd of the given integers M, N. It has great application in security algorithms to set encryption and decryption keys.]
*/

//Program to find gcd of a given number using recursion.
#include<iostream>
using namespace std;
class GCD {
    public:

    //member function to find gcd
    int find_gcd(int m, int n) {
        int r;
        if(m<n) {
            return find_gcd(n,m);
        }
        r = m%n;
        if(r == 0) {
            return n;
        }
        else {
            return find_gcd(n, r);
        }// end of find_gcd()
    }
};
int main()
{
    GCD obj;
    int m,n;
    cout<<"Enter an integre value: ";
    cin>>m;
    cout<<"Enter a second integre value: ";
    cin>>n;
    cout<<"GCD of "<<m<< " and "<<n<<" = "<<obj.find_gcd(m,n);
    return 0;
}