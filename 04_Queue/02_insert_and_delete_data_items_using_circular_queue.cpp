/*
//Write a function sub-algorithm to insert an item 'X' into a circular queue 'CQ'. F and B represents the pointers to the Front and Back of the queue respectively. MAX represents the maximum size of queue.
Function: Insert(X)
1- IF F = (B + 1) % MAX
        PRINR "Circular Queue overflow"
        RETURN
   ELSE
        B = (B + 1) % MAX
        CQ[B] = X
   END IF
2- IF F = -1 THEN F = 0
3- RETURN

--------------------------------------

//Write a function sub-algorithm to delete an item 'X' into a circular queue 'CQ'. F and B represents the pointers to the Front and Back of the queue. The deleted item is assigned to varable X. MAX represents the maximum size of queue.
Function: Delete()
1- IF (F = -1) AND (B = -1)
        PRINR "Circular Queue IS EMPTY"
        RETURN
   ELSE
        X = CQ[F]
        CQ[F] = '\0'
   END IF
2- IF F = B THEN 
        F = -1
        B = -1
   ELSE
        F = (F+1) % MAX
   END IF
3- RETURN X
*/

//Program to insert and delete items to and from a circular queue.
#include<iostream>
using namespace std;
class cir_queue {
    private:
    int F, B;
    int CQ[5];
    public:

    //constructor to initialize F & B
    cir_queue() 
    {
        F = -1;
        B = -1;
    }

    void qinsert(int);
    int qdel(void);
};

//member function to add item
void cir_queue::qinsert(int n)
{
    if(F ==(B+1)%5) //maximum size of array is 5
    {
        cout<<"Circular Queue is full";
        return;
    }
    else
    {
        B = (B + 1) % 5; //use to access empty space to insert value
        CQ[B] = n;
        cout<<"\n Value "<<n<<" is inserted"<<endl;
    }
    if(F == -1){
        F = 0;
    }
}//end of qinsert()

//member function to delete item
int cir_queue::qdel() 
{
    int x;
    if ((F == -1) && (B == -1))
    {
        cout<<"\nCircular queue is empty!";
        return '\0';
    }
    else
    {
        x = CQ[F];
        CQ[F] = '\0';
    }
    if (F == B) {
        F = B = -1;
    }
    else {
        F = (F + 1) % 5;
    }
    return x;
}// end ofqdel()

//main function
int main()
{
    cir_queue obj;
    int opt, val;
    while(opt !=3) 
    {
        cout<<"\nPress 1 to insert item"<<endl;
        cout<<"Press 2 to delete item"<<endl;
        cout<<"Press 3 to exit!"<<endl;
        cout<<"Enter your choice: [1-3]? ";
        cin>>opt;

        switch(opt) 
        {
            case 1:
                cout<<"Enter value to insert: ";
                cin>>val;
                obj.qinsert(val);
                break;
            case 2:
                cout<<"\nValue "<<obj.qdel()<<" is deleted!"<<endl;
        }//end of switch
    }//end of while 
    return 0;
}// end of main()