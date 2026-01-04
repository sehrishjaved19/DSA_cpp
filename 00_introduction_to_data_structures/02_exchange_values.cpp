/* 
Algorithm - EXCHANGE VALUES
1- START
2- A = 10 [assign value 10 to variable A]
3- B = 20 [assign value 20 to variable B]
4- TEMP = A [assign the value of A to variable TEMP]
5- A = B [assign the value of B to variable A]
6- B = TEMP [assign the value of TEMP to variable B]
7- END
*/

//Porgram to swap the values
#include<iostream>
using namespace std;
class Swap {
    private:
    int A, B, TEMP;
    public:
    
    //member function to input two numbers
    int input()
    {
        cout<<"Enter first number: ";
        cin>>A;
        cout<<"Enter second number: ";
        cin>>B;
    }// end of input()

    // member function to swap numbers
    int swap()
    {
        TEMP = A;
        A =B;
        B = TEMP;
        cout<<"-------------------------------";
        cout<<"\nValues after Exchanging\n";
        cout<<"Value of A = "<<A<<endl;
        cout<<"Value of B = "<<B<<endl;
    }// end of swap()
};
int main()
{
    Swap obj;
    obj.input();
    obj.swap();
    return 0;
}// end of main