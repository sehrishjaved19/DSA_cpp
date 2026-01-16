/*
Write an algorithm to insert item into the priority queue represented by a two- diemnsional array with 3 rows and 10 columns. Assume that the name of the array is ABC.
Algorithm-Insertion in prioriry queue
1- START
2- [Initialize Back & Front for first row of two-dimensional array]
   SET B1 & F1 TO -I
3- [Initialize Back & Front for two row of two-dimensional array]
   SET B2 & F2 to -1
4- [Initialize Back & Front for three row of two-dimensional array]
   SET B2 & F2 to -1
5- [Enter value to insert, in variable 'N']
   INPUT N
6- [Enter priority in variable 'P']
   INPUT P
7- IF P = 1 THEN CALL INSERT (N,,B1,F1)
8- IF P = 2 THEN CALL INSERT (N,,B2,F2)
9- IF P = 3 THEN CALL INSERT (N,,B2,F2)
10- END

---------------

Function: INSERT(X,I,B,F) 
1- IF B >= 9 THEN           [Check queue whether it has space]
        PRINT "Queue is full!"
        RETURN
   ELSE
        B = B+1
        ABC[I][B] = X
   END IF
2- IF F = -1 THEN F = 0

------------------------------------

//Algorithm to delete item from a priority queue consisting of a two-dimensional array "ABC" with 3 rows and 10 columns.
1- START
2- INPUT P         [Enter priority in variable 'P']
3- IF P = 1 THEN X = DELETE(0, B1, F1)
4- IF P = 2 THEN X = DELETE(1, B2, F2)
5- IF P = 3 THEN X = DELETE(2, B2, F2)
6- PRINT X, "is deleted from the queue!"
7- END

---------------

Function: Delete(B, F, I)
1- IF F = -1 THEN
        PRINT "Queue is empty!"
        RETURN NULL
   END IF
2- DATA = ABC[I][F]
3- ABC[I][F] = NULL
4- IF F = B THEN
        F = B -1
   ELSE
        F = F+1
   END IF
5- RETURN DATA
*/

//Program to insert and/or delete items from priority queue having 3 arrys and 10 elements in each array.
#include<iostream>
using namespace std;
class pri_que {
    private:
    int F1,B1,F2,B2,F3,B3;
    int PQ[3][10];
    public:

    //Constructor to initialize Fronts & Backs
    pri_que() {
        F1 = -1;
        B1 = -1;
        F2 = -1;
        B2 = -1;
        B3 = -1;
        F3 = -1;
    }

    void insert(int, int);
    void add(int, int&, int&, int);
    int del(int);
    int remove(int&, int&, int);
    void print(int);
    void ppp(int&, int&, int);
};

//member function that calls add() function for inserting value in a queue
void pri_que::insert(int n, int p) 
{
    switch(p)
    {
        case 1:
            add(n, B1, F1, 0);
            break;
        case 2:
            add(n, B2, F2, 1);
            break;
        case 3:
            add(n, B3, F3, 2);
    }
}

//member function add() that inserts value in a queue
void pri_que::add(int x, int& B, int & F, int I) {
    if(B >= 9) {
        cout<<"Queue is full!";
        return;
    }
    else
    {
        B++;
        PQ[I][B] = x;
        if(F == -1) F = 0;
    }
}

//member function that call remove() function for deleting value from the queue
int pri_que::del(int p) 
{
    switch(p) 
    {
        case 1:
            remove(B1,F1,0);
            break;
        
        case 2:
            remove(B2,F2,1);
            break;

        case 3:
            remove(B3,F3,2);
            break;
    }
}//end of del()

//member function remove() that deletes a value from a queue
int pri_que::remove(int& B, int& F, int i) {
    int data;
    if (F==-1) {
        cout<<"Queue is empty!";
        return '\0';
    }
    data = PQ[i][F];
    if(F == B) F = B = -1;
    else F++;
    return data;
}//end of remove()

//member function that calls ppp() function fro printing values from the queue
void pri_que::print(int p) {
    switch(p) {
        case 1:
            ppp(B1, F1, 0);
            break;
        
        case 2:
            ppp(B2, F2, 1);
            break;
        
        case 3:
            ppp(B3, F3, 1);
            break;
    }
}// end of print()

//member function ppp() that displays values from the queue
void pri_que::ppp(int& B, int& F, int i)
{
    if (F == -1) {
        cout<<"Queue is empty!";
        return;
    }
    for(int c = F; c<= B; c++) 
        cout<<PQ[i][c]<<"\t";
}
int main()
{
    pri_que obj;
    int opt, val, pri;
    while(opt != 3) {
        cout<<"\nPress 1 to insert item!"<<endl;
        cout<<"Press 2 to delete item!"<<endl;
        cout<<"Press 3 to exit!"<<endl;
        cout<<"Enter the choice: [1-3]?";
        cin>>opt;
        switch(opt) {
            case 1:
                cout<<"Enter value to insert: ";
                cin>>val;
                cout<<"Enter Priority: ";
                cin>>pri;
                obj.insert(val,pri);
                cout<<"\nQueue after insertion: "<<endl;
                obj.print(pri);
                break;
            
            case 2:
                cout<<"\nEnter priority: ";
                cin>>pri;
                cout<<"\nValue "<<obj.del(pri)<<" is deleted!"<<endl;
                cout<<"\nQueue after deletion";
                obj.print(pri);
        }
    }
    return 0;
}

