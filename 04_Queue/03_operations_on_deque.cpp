/*
// Write an algorithm to insert an item at the front end of a deque DQ having N elements.
Alogrithm-Insertion at the front side of the deque
1- START
2- INPUT data value into X
3- IF F = 0 AND B = N-1 THEN      [When deque is full]
        PRINT "Deque is full!"
        EXIT
   END IF
4- IF F = -1 AND B = -1 THEN     [When deque is empty]
        B = F = 0
        DQ[F] = X
   END IF
5- IF F>0 THEN                 [ When deque has space at its back end]
        F = F-1
        DQ[F] = X
   ELSE
        PRINT "No space at front side of the deque!"
   END IF
6- END

--------------------------------------

// Write an algorithm to insert an item at the Back (rear) end of a deque DQ having N elements.
Alogrithm-Insertion at the back side of the deque
1- START
2- INPUT data value into X
3- IF F = 0 AND B = N-1 THEN      [When deque is full]
        PRINT "Deque is full!"
        EXIT
   END IF
4- IF F = -1 AND B = -1 THEN     [When deque is empty]
        B = F = 0
        DQ[B] = X
   END IF
5- IF B<N-1 THEN                  [ When deque has space at its back end]
        B = B+1
        DQ[B] = X
   ELSE
        PRINT "No space at front side of the deque!"
   END IF
6- END

--------------------------------------

// Write an algorithm to delete  an item at the fornt side of a deque DQ having N elements.
Alogrithm-Insertion at the back side of the deque
1- START
2- IF F = -1 AND B = -1 THEN      [When deque is empty]
        PRINT "Deque is empty!"
        EXIT
   ELSE
        DQ[F] = '\0'              [When deque is not empty]
   END IF
3- [After deleteing fornt value, check values of F and B and set their values]
4- IF F = B THEN
        B = F = -1
   ELSE IF F = N-1 THEN
        F = -1
   ELSE
        F = F + 1
   END IF
5- END

--------------------------------------

// Write an algorithm to delete  an item at the backside of a deque DQ having N elements.
Alogrithm-Insertion at the back side of the deque
1- START
2- IF F = -1 AND B = -1 THEN      [When deque is empty]
        PRINT "Deque is empty!"
        EXIT
   ELSE
        DQ[F] = '\0'           [When deque is not empty]
   END IF
3- [After deleteing back value, check values of F and B and set their values]
4- IF F = B THEN
        B = F = -1
   ELSE
        B = B-1
   END IF
5- END

--------------------------------------

*/

// Program to insert and delete items from a deque
#include<iostream>
using namespace std;
class deque {
    private:
    int F, B, DQ[5];
    public:

    //Constructor to initialize F & B
    deque() {
        F = -1;
        B = -1;
    } 
    void insert_front(int);
    void insert_back(int);
    void del_front(void);
    void del_back(void);
    void print_deque(void);
};

//member function to insert item from front side of the queue
void deque::insert_front(int n) {
     if ((F == 0)&&(B == 4)) {
          cout<<"\nDeque overflow!"<<endl;
          return;
     }
     if ((F == -1)&&(B == -1))
     {
          F = B = 0;
          DQ[F] = n;
     }
     else if (F>0) {
          F = F-1;
          DQ[F] = n;
     }
     else 
     {
          cout<<"\nNo space from front side!"<<endl;
     }
}// end of insert_front()

//member function to insert from the back side of deque
void deque::insert_back(int n) {
     if ((F == 0)&&(B == 4)) {
          cout<<"\nDeque overflow!"<<endl;
          return;
     }
     if ((F == -1)&&(B == -1)) {
          F = B = 0;
          DQ[B] = n;
     }
     else if(B < 4) {
          B = B + 1;
          DQ[B] = n;
     }
     else 
     {
          cout<<"\nNo space from back side!"<<endl;
     }
}// end of insert_back

//member function to delete item from front
void deque::del_front() 
{
     if((F == -1)&&(B == -1)) {
          cout<<"\nDeque is empty!"<<endl;
          return;
     }
     DQ[F] = '\0';
     if (F == B) {
          F = B = -1;
     }
     else if(F == 4) {
          F = -1;
     }
     else {
          F = F + 1;
     }
}// end of del_front

void deque::del_back() {
     if((F == -1)&&(B == -1)) {
          cout<<"\nDeque is empty!"<<endl;
          return;
     }
     DQ[B] = '\0';
     if ((F == B)) {
          B = F =-1;
     }
     else 
     B--;
}//end of del_back

//member function to display data from deque
void deque::print_deque() {
     cout<<"\nDeque after operation is: "<<endl;
     if ((F == -1)&&(B == -1)) {
          cout<<"\nDeque is empty!;"<<endl;
          return;
     }
     for (int i = F; i<=B; i++) {
          cout<<DQ[i]<<"\t";
     }
}//end of print_deque

int main()
{
    deque obj;
    int opt, val;
    int loop = 1;
    while(loop) {
          cout<<"\nPress 1 to insert item from front side!"<<endl;
          cout<<"Press 2 to insert item from back side!"<<endl;
          cout<<"Press 3 to delete item from front side!"<<endl;
          cout<<"Press 4 to delete item from back side!"<<endl;
          cout<<"press 5 to exit!"<<endl;
          cout<<"Enter your option [1-5]?";
          cin>>opt;
          switch(opt) {
          case 1:
               cout<<"Enter value to insert from front side: ";
               cin>>val;
               obj.insert_front(val);
               cout<<"\nDeque after inserting value from front side is as follows: "<<endl;
               obj.print_deque();
          break;
          case 2:
               cout<<"Enter value to insert from back side: ";
               cin>>val;
               obj.insert_back(val);
               cout<<"\nDeque after inserting value from back side is as follows: "<<endl;
               obj.print_deque();
          break;
          case 3:
               obj.del_front();
               cout<<"\nDeque after deleting value from front side is as follows: "<<endl;
               obj.print_deque();
               break;
          case 4:
               obj.del_back();
               cout<<"\nDeque after deleting value from back side is as follows: "<<endl;
               obj.print_deque();
               break;
          case 5:
               loop = 0;
               break;

          default:
               cout<<"Invalid option!"<<endl;
          } //end of switch
    } // end of while
    return 0;
}// end of main