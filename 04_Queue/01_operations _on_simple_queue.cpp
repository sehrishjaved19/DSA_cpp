/*
//Write a program to insert an item into a queue 'QU' which has a capactiy of N elements.
Algorithm-Inserting data item into queue
1- START
2- ASSIGN value -1 to F and B
[F refer to front and B refers to back]
3- IF B>= N THEN         [Check queue if it has space]
        PRINT "Queue overflow"
        RETURN
   ELSE
        B = B+1
        INTPUT value in X
        QU[B] = X       [Insert value X into queue]
   END IF
4- [Assign 0 to F if you have just inserted the first value onto queue]
   IF F = -1 THEN
        F = 0
   END IF
5- STOP

------------------------------

//Write a program to remove an item from a queue 'QU' which has a capactiy of N elements.
Algorithm-Removing data item into queue
1- START
2- IF F= -1 THEN         [Check queue if it is empty]
        PRINT "Queue is empty"
        RETURN
   END IF
3- PRINT QU[F]      [Display the item and then remove it from queue]
        QU[F] = '\0'
        F = F+1
4- [initialize value of F & B to -1 if last item is remove from queue]
   IF F> B THEN
        F = -1
        B = -1
   END IF
5- STOP
*/

// Program that inserts and remove data items to and from a simple queue.
#include<iostream>
using namespace std;
class queue {
    private:
    int B,F;
    int QU[10];
    public:

    //constructor that initializes variables B & F
    queue(void) {
        B = -1;
        F = -1;
    }
    void insert(int);
    void remove(void);
    void display(void);
};

//member function to insert value into queue
void queue::insert(int x) {
    if(B >=9 ) {
        cout<<"Queue overflow\n";
        return;
    }
    else {
        B = B + 1;
        QU[B] = x;
    }
    if (F == -1){
        F = 0;
    }
}// End of insert()

// member function to remove value form the queue
void queue::remove(void) {
    if (F == -1) {
        cout<<"\nQueue is empty!\n";
        return;
    }
    cout<<"Value "<<QU[F]<<" is removed!"<<endl;
    QU[F] = '\0';
    F = F +1;
    if (F> B) {
        F = B = -1;
    }
}// end the remove()

//member function to display values of queue
void queue::display(void) {
    if (F == -1) {
        cout<<"Queue is empty!\n\n";
        return;
    }
    for (int i = F; i <=B; i++) {
        cout<<QU[i]<<endl;
    }
}//end of display()
int main()
{
    queue obj;
    int n, opt, loop = 1;
    while(loop)
    {
        cout<<"Press 1 to Insert value into queue "<<endl;     
        cout<<"Press 2 to remove value queue"<<endl;
        cout<<"Press 3 to display values of queue"<<endl;
        cout<<"Press 4 to exit"<<endl;
        cout<<"Enter your option [1-4]: ";
        cin>>opt;
        switch(opt) {
            case 1:
                cout<<"Enter value to insert: ";
                cin>>n;
                obj.insert(n);
                break;

            case 2:
                obj.remove();
                break;
            
            case 3:
                cout<<"\nValues in queue: "<<endl;
                obj.display();
                break;

            case 4:
                loop = 0;
                break;

            default:
                cout<<"\nInvalid option\n";
        }// endl of switch
    }//end if while
    return 0;
}// end if main()