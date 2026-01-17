/*
//Write an algorithm that inserts N integer data values into a hash table and then searches a specific value from the hash table. Take an array ARR of size N.
Alogorithm-Inserting/Searching integer value into/from a hash table
1-  START
2-  Initialize ARR array to null('\0')
3-  INPUT data value into array ARR
4-  REPEAT Step-5 TO Step-7 FOR I = 1 TO N
5-  INPUT data value in VAL
6-  [Compute the index to store the value into hash table]
    INDEX = VAL/N
7-  [If the calculated index has empty space, store the value, otherwise display "Collision" message]
    IF ARR[INDEX] = NULL THEN
        ARR[INDEX] = VAL
    ELSE
        PRINT "Collision occurs!"
    END IF        [End of step-4 loop]
8-  INPUT data value to search in X
9-  [Search value from hash table by recomputing its index in hash table]
10- IF ARR[INDEX] = NULL('\0') THEN
        PRINT "Value not found"
    ELSE
        PRINT"Data value is:", ARR[INDEX]
    END IF
11- EXIT
*/

//Program to input 10 integer values into a hash table and search a specific value from the hash table
#include<iostream>
using namespace std;
class hash_integers {
    private:
    int index;
    int hash_tbl[10];
    public:
    //prototypes or declarations of the functions in the class
    void assign_null(void);
    void input(int);
    void search(int);
};

//member function to assign null to all elements of array(hash table)
void hash_integers::assign_null() {
    for(int i = 0; i<=10; i++) {
        hash_tbl[i] = '\0';
    }
}//end of assign_null()

//member function to input a value into the hash table
void hash_integers::input(int n) {
    index = n % 10;
    if (hash_tbl[index]=='\0') {
        hash_tbl[index] = n;
    }
    else {
        cout<<"\nCollisions occurs, this value is not stored!"<<endl;
    }
}//end of input()

//member function to search a value from the hash table
void hash_integers::search(int n) {
    index = n % 10;
    if (hash_tbl[index] != n || hash_tbl[index]== '\0') {
        cout<<"\nValue not found!";
    }
    else {
        cout<<"\nValue found: "<<hash_tbl[index];
    }
} //end of search()
int main()
{
    hash_integers obj;
    int val, x;
    obj.assign_null();
    for(int i = 0; i<=9; i++) {
        cout<<"\nEnter the value in slot "<<i<<" of hash table: ";
        cin>>val;
        obj.input(val);
    }
    cout<<"\nEnter a value to search: ";
    cin>>x;
    obj.search(x);
    return 0;
}