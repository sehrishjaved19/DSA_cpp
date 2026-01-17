/*
//Write an algorithm that finds a value in an array 'ABC' consisiting of 10 elements, sorted in ascending order. Assume that S represents the first element of the array and E represents the last element of the array.
Algorithm- Binary Search
1- START
2- S = 1, E = 10           [Assign values to variables S(start) and E(end)]
3- SET LOC = -1
4- INPUT values in array ABC in ascending order.
5- INPUT VAL              [Enter value to be searched in variable VAL]
6- [Loop that searches value in an array using binary search]
   REPEAT Step-7 and Step-8 WHILE S <= E
7- MID (S+E)/2
8- IF VAL = ABC[MID] THEN
        LOC = MID +1
        EXIT
   ELSE IF VAL < ABC[MID] THEN
        E = MID - 1
   ELSE
        S = MID + 1
   END IF             [End od Step-6 loop]
9- IF LOC = -1 THEN
        PRINT"Value not found!"
   ELSE
        PRINT"Value found at location ", LOC
   END IF
10- EXIT
*/

//Program to search a required value from array with binary search value
#include<iostream>
using namespace std;
class bin_search {
    private:
    int abc[10];
    public:
    void input(void);
    void search(int);
};

//member function to enter values in array
void bin_search::input(void) {
    cout<<"\nEnter 10 values into array in ascending order: "<<endl;
    for(int i = 0; i<=9; i++) {
        cin>>abc[i];
    }
}//end of input()

//member function to search value from array
void bin_search::search(int num)
{
    int loc = -1;
    int m;
    int s = 0;
    int e = 9;
    while(s <= e)
    {
        m = (s+e)/2;
        if(num == abc[m]) {
            loc = m+1;
            break;
        }
        else if (num < abc[m]){
            e = m -1;
        }
        else{
            s = m + 1;
        }
    }//end of while
        if(loc == -1) {
            cout<<"\n Value not found!"<<endl;
        }
        else
            cout<<"\nValue found at location = "<<loc<<endl;
}// end of search()

int main()
{
    bin_search obj;
    int val;
    obj.input();
    cout<<"Enter value to search: ";
    cin>>val;
    obj.search(val);
    return 0;
}