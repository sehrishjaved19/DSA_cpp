/*
Algorithm - Inserting a value at specific location
1- START
2- INPUT location into P
3- [Check the value in location P whether it is a valid [position in an array 'XYZ']
    IF (P>=N) THEN
        PRINT "Invalid position"
        RETURN TO Step-2
    END IF
4- INPUT value in VAL
5-[Move values of elements from P one step forward through loop]
    REPEAT WHILE(N>=P)
        XYZ[N+1] = XYZ[N]
        N = N-1
    END WHILE
6- [Insert value N at position P using assignment statement]
    XYZ[P] = VAL
7-END
*/

// Program to insert value at specific location in array

#include<iostream>
using namespace std;
class Insertion {
    private:
    int xyz[5];
    public:
     
    //member function to assign values to array
    void assign (int p []) {
        for(int i = 0; i<=3; i++) {
            xyz[i] = p[i];
        }
    }

    //mmeber funvtion to insert a value in array
    void insert(int loc, int val) {
        for(int i = 4; i>= loc; i--) {
            xyz[i+1] = xyz[i];
        }
        xyz[loc] = val;
    }

    // member function to print all values 
    void display (int n) 
    {
        for(int i = 0; i<=n; i++){
            cout<<xyz[i]<<endl;
        }
    }
};
int main() {
    Insertion obj;
    int pos, n, a[4] = {44,55,6,5};
    obj.assign(a);
    cout<<"Values before insertion"<<endl;
    obj.display(3);
    cout<<"Enter value to insert?";
    cin>>n;
    cout<<"Enter position to insert?";
    cin>>pos;
    if(pos>=5) 
    {
        cout<<"Invalid Location";
    }
    obj.insert(pos,n);
    cout<<"Values after insertion"<<endl;
    obj.display(4);
    return 0;
}
