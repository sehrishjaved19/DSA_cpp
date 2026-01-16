/*
//Write an algorithm that seraches a value in an array XYZ having N elements and replaces the searched value with a new onw. Use a sequential method to search the array.
Algorithm-Searching & Replacing using sequential search
1- START
2- SET LOC = -1
3- INPUT N values in XYZ array
4- INPUT VAL1          [Enter values that is to be serached]
   INPUT VAL2          [Enter value to by replace with VAL1]
5- REPEAT Step-6 FOR I = 1 TO N
6- IF VAL1 = XYZ[I] TEN
        xyz[I] = VAL2
        LOC = I
        PRINT"Value is modified at Location ", LOC
        EXIT
   END IF [eND OF STEP-5 LOOP]]
7- IF LOC = -1 THEN
        PRINT "Value is found"
   END IF
8- EXIT
*/

//Program to search a value in an array using sequential search.
#include<iostream>
using namespace std;
class seq_search {
    private:
    int xyz[5];
    public:
    void input(void);
    void search_replace(int, int);
};

//member function to input data into array
void seq_search::input(void) {
    cout<<"\nEnter 5 values"<<endl;
    for(int i = 0; i <=4; i++) {
        cin>>xyz[i];
    }
}//end of input()

//member function to search data from array
void seq_search::search_replace(int m, int n) {
    int i = 0;
    int loc = -1;
    while(i<=4) {
        if(m == xyz[i]) {
            xyz[i] = n;
            loc = i+1;
            cout<<"\nValue is modified at location = "<<loc;
            break;
        }
        i++;
    }//end of while
    if (loc == -1) 
    {
        cout<<"\nValue not found"<<endl;
    }
}// end of search()

//main function
int main() {
    seq_search obj;
    int val1, val2;
    obj.input();
    cout<<"\nEnter a value to search: ";
    cin>>val1;
    cout<<"\nEnter a value to replace: ";
    cin>>val2;
    obj.search_replace(val1, val2);
    return 0;
}//end of main()