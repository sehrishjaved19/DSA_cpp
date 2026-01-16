/*
// Write an algorithm that seraches a value from an array 'XYZ' hsving N elements.
1- START
2- SET LOC = -1
3- INPUT N values in XYZ array
   INPUT VAL          [Enter values that is to be serached]
4- REPEAT Step-5 FOR I = 1 TO N
5- IF VAL = XYZ[I] TEN
        LOC = I
        PRINT"Value found at Location ", LOC
        EXIT
   END IF [[eND OF STEP-4 LOOP]]
6- IF LOC = -1 THEN
        PRINT "Value is found"
   END IF
7- EXIT
*/

//Program to search a value in an array using sequential search.
#include<iostream>
using namespace std;
class seq_search {
    private:
    int xyz[5];
    public:
    void input(void);
    void search(int);
};

//member function to input data into array
void seq_search::input(void) {
    cout<<"Enter 5 values"<<endl;
    for(int i = 0; i <=4; i++) {
        cin>>xyz[i];
    }
}//end of input()

//member function to search data from array
void seq_search::search(int n) {
    int i = 0;
    int loc = -1;
    while(i<=4) {
        if(n == xyz[i]) {
            loc = i+1;
            cout<<"value found at location = "<<loc;
            break;
        }
        i++;
    }//end of while
    if (loc == -1) 
    {
        cout<<"Value not found"<<endl;
    }
}// end of search()

//main function
int main() {
    seq_search obj;
    int val;
    obj.input();
    cout<<"Enter a value to search: ";
    cin>>val;
    obj.search(val);
    return 0;
}//end of main