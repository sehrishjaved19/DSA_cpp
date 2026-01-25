/*
//Write an algorithm that displays data of all the nodes of a singly linked list. Suppose "START" stores the starting address of the list and each node of the list has two fields. The first is the "data" field for storing data and the other is the "link" field for storing the address of the next node.
Algorithm- Traversing Singly Linked List
1- START
2- Declare a pointer variable CURRENT of type node
3- IF the linked list is empty then display a message and exit.
4- [Assign the starting address of the list to CURRENT pointer variable]
        CURRENT = START
5- [Assess data of the list via CURRENT pointer variable]
   REPEAT Step-6 to 7 WHILE CURRENT != NULL
6- PRINT CURRENT -> DATA
7- CURRENT = CURRENT->Link [Move to next node]
   [End of step-5 loop]
8- EXIT

-----------------------------------------------

//Write an algorithm that counts the total number of nodes in a singly linked list. Suppose "START" stores the starting address of the list.
Algorithm- Counting Nodes
1- START
2- Declare a pointer variable CURRENT of type node
3- IF the linked list is empty then display a message and exit.
4- [Assign the starting address of the list to CURRENT pointer variable]
   CURRENT = START
5- COUNT = 0
6- [Assess data of the list via CURRENT pointer variable]
   REPEAT Step-7 to 8 WHILE CURRENT != NULL
7- COUNT = COUNT + 1
8- CURRENT = CURRENT->Link [Move to next node]
   [End of step-6 loop]
9- PRINT "Total nodes = ", COUNT
10- EXIT

-----------------------------------------------

//Write an algorithm that searches a specific data item from a singly linked list. Suppose "START" stores the starting address of the list.
Algorithm- Searching in Singly Linked List
1- START
2- IF the linked list is empty then display a message and exit.
3- flag = 0
4- Declare a pointer variable CURRENT of type node
5- INPUT value to search in X
6- [Assign the starting address of the list to CURRENT pointer variable]
        CURRENT = START
7- [Assess data of the list via CURRENT pointer variable]
   WHILE CURRENT != NULL
    IF CURRENT->DATA = X THEN
        flag = 1
        EXIT
    END IF
8- IF flag = 1 THEN
        PRINT "Value found in the list"
   ELSE
        PRINT "Value not found in the list"
   END IF
9- EXIT

-----------------------------------------------

//Write an algorithm that inserts a new node at the end of a linked list. Suppose "START" stores the starting address of the list.
Algorithm- Insertion of a new node at the end of a Linked List
1- START
2- Declare two pointer variables TEMP and CURRENT of type node.
3- CREATE a linked list
4- CREATE a new node TEMP
5- INPUT value in variable X for the new node to be inserted
6- [Assign value to the temp node]
        TEMP->data = X
        TEMP->link = NULL
7- [Go to the end of linked list]
        CURRENT = START
        WHILE CURRENT != NULL
            CURRENT = CURRENT->link
        END WHILE
8- [Assign the address of the newly created node TEMPO to the link field of the last node]
        CURRENT->link=TEMP
9- EXIT

-----------------------------------------------

//Write an algorithm that inserts a new node at the beginning of a linked list. Suppose "START" stores the starting address of the list.
Algorithm- Insertion of a new node at the bedinning of a Linked List
1- START
2- Declare a pointer variable TEMP of type node.
3- CREATE a linked list
4- CREATE a new node TEMP
5- INPUT data value for TEMP in X
6- [Assign value to the data field of the temp node]
        TEMP->data = X
7- [Assign the value START (starting address of the list) to the link field of the newly created node and then assign the address of TEMP to START.]
        TEMP->link = START
        START= TEMP
8- EXIT

-----------------------------------------------

//Write an algorithm that inserts a new node at a specific location in a linked list. Suppose "START" stores the starting address of the list.
Algorithm- Insertion at a specified location within a Linked List
1- START
2- Declare two pointer variables TEMP and CURRENT of type node.
3- CREATE a linked list wih three nodes. Suppose the pointer variable "START" stores the starting address of this list.
4- CREATE a new node TEMP
5- INPUT data value for TEMP in X
6- [Assign value to the data field of the temp node]
        TEMP->data = X
7- INPUT value in Y to be searched in the list after which new node is to be inserted.
8- [Assign the starting address of the list to CURRENT pointer variable]
        CURRENT = START
9- [Go to the node taht has a value equal to Y via current pointer (i.e after which the new noode is to be inserted ).]
        WHILE CURRENT != NULL
            IF CURRENT->data =Y THEN
                EXIT
            END IF
            CURRENT = CURRENT->link
        END WHILE
10- [Assign the valueof link field of the current node to the link field of TEMP (newly created node). Similarly, assign the address of the newly created node (i.e. addrress of TEMP ) to the link field of the current node.]
        TEMP->link = CURRENT->link
        CURRENT->link = TEMP
11- EXIT

-----------------------------------------------

//Write an algorithm that deletes a node from the end of  a singly linked list. Suppose "START" stores the starting address of the list.
Algorithm-Deleting a node from the end of the inked List
1- START
2- Declare two pointer variables PREVIOUS and CURRENT of type node.
3- CREATE a linked list
4- [Go to the end of linked list]
        CURRENT = START
        WHILE CURRENT != NULL
            PREVIOUS = CURRENT
            CURRENT = CURRENT->link
        END WHILE
5- [Delete the CURRENT (last node) and assign NULL value in the link field of PREVIOUS.]
        delete CURRENT
        PREVIOUS->link = NULL
6- EXIT

-----------------------------------------------

//Write an algorithm that deletes a node from the beginning of  a singly linked list. Suppose "START" stores the starting address of the list.
Algorithm-Deleting a node from the beginning of the inked List
1- START
2- Declare two pointer variables PREVIOUS and CURRENT of type node.
3- CREATE a linked list
4- [Go to the end of linked list]
        CURRENT = START
        WHILE CURRENT != NULL
            PREVIOUS = CURRENT
            CURRENT = CURRENT->link
        END WHILE
5- [Delete the CURRENT (last node) and assign NULL value in the link field of PREVIOUS.]
        delete CURRENT
        PREVIOUS->link = NULL
6- EXIT

-----------------------------------------------

//Write an algorithm that deletes a node from a particular location within a linked list.
Algorithm-Deleting a node from the end of the inked List
1- START
2- Declare three pointer variables START, PREVIOUS and CURRENT of type node.
3- CREATE a linked list
4- INPUT data value of a node in Y that is to be deleted.
5- [Assign the starting address of the list into pointer variables PREVIOUS and CURRENT.]
        CURRENT = PREVIOUS = START
6- [Go to the node that has a value equal to Y via CURRENT pointer(i.e. node that is to be deleted).]
        POS = 0
        WHILE CURRENT != NULL
            IF CURRENT->data = Y THEN 
                POS = 1
                EXIT
            END IF
            PREVIOUS = CURRENT
            CURRENT = CURRENT->link
        END WHILE
7-  IF POS = 1 THEN
        [Assign the value of the link field of CURRENT node to the link field of PREVIOUS node and then PREVIOUS->link = CURRENT->link
        delete CURRENT
    ELSE
        PRINT"Value not found"
    END IF
8- EXIT

-----------------------------------------------

*/

//Program that implements the operations of singly linked list.
#include<iostream>
using namespace std;

struct node {
        float data;
        node* link;
};

class list {
    private:
    node *start;
    public:
    list(void) { //initialized an empty list
        start = NULL;
    }

    //prototypes of functions
    void insert_begin(void);
    void insert_end(void);
    void insert_location(void);
    void delete_begin(void);
    void delete_end(void);
    void delete_location(void);
    void search(void);
    void display(void);
    int count(void);
    void bubble_sort(void);
};
int main()
{
    list obj;
    int op, loop = 1;
    while(loop) {
        
        cout<<"Press-01 to insert a node at the beginning"<<endl;
        cout<<"Press-02 to insert a node at the end"<<endl;
        cout<<"Press-03 to insert a node at a specific location"<<endl;
        cout<<"Press-04 to delete a node at the beginning"<<endl;
        cout<<"Press-05 to delete a node at the end"<<endl;
        cout<<"Press-06 to delete a node at a specific location"<<endl;
        cout<<"Press-07 to sort the values of the list"<<endl;
        cout<<"Press-08 to search the value from the list"<<endl;
        cout<<"Press-09 to display the data of the nodes"<<endl;
        cout<<"Press-10 to Count nodes of the list"<<endl;
        cout<<"Press-11 to Exit"<<endl;
        cout<<"\nEnter Your option [1-11]?";
        cin>>op;
        switch(op) {

                case 1:
                        obj.insert_begin();
                        break;

                case 2:
                        obj.insert_end();
                        break;

                case 3:
                        obj.insert_location();
                        break;

                case 4:
                        obj.delete_begin();
                        break;

                case 5:
                        obj.delete_end();
                        break;

                case 6:
                        obj.delete_location();
                        break;

                case 7:
                        obj.bubble_sort();
                        break;

                case 8:
                        obj.search();
                        break;

                case 9:
                        obj.display();
                        break;

                case 10:
                        cout<<"\nTotal nodes are: "<<obj.count()<<endl;
                        break;
                
                case 11:
                        loop = -1;
                        break;
                
                default:
                        cout<<"\nInvalid option!"<<endl;
                        break;
        }//end of switch
        if (loop == -1) {break;}
    }//end of while loop
    return 0;
}// end of main

//This function display the data of the linked list
void list::display(void) {
        struct node *current; //created a pointer variable
        if(start == NULL) { //start is the the head of list
                cout<<"\nList is empty!"<<endl;
                return;
        }
        else {
                current = start;
                while(current != NULL) {
                        cout<<current->data<<endl;
                        current = current->link;
                }
        }
}//end of display

//This function counts the total number of nodes in the linked list and returns the result to the calling function
int list::count(void) {
        struct node *current;
        int n= 0;
        if(start == NULL) {
                cout<<"List is empty"<<endl;
                return 0;
        }
        else {
                current = start;
                while(current!=NULL) {
                        n++;
                        current = current->link;
                }
                return n;
        }
}//end of count();

//This function seraches a particular value from the linked list
void list::search(void) {
        struct node *current;
        int value, flag = 0;
        if (start == NULL) {
                cout<<"\nList is empty!"<<endl;
                return;
        }
        else {
                cout<<"\nEnter a value to search: ";
                cin>>value;
                current = start;
                while(current!= NULL) {
                        if(current->data == value) {
                                flag = 1;
                                break;
                        }
                        current = current->link;
                }
        }
        if (flag == 1) {
                cout<<"\nValue found in the list";
        }
        else {
                cout<<"\nValue not found in the list";
        }
}//end of search()

//This function inserts a new node at the end of the linked list
void list::insert_end(void) {
        struct node *temp, *current;

        //create a temp node in memory
        temp = new node;//(here new allocates a memory of data type node and stores the address in temp which is a pointer variable.)

        //input or assign data to temp node
        cout<<"Enter the data value for the node: ";
        cin>>temp->data;
        temp->link = NULL;//as we are inserting at the end, so the next link field of last node is kept null.

        //if the list is empty
        if(start == NULL) {
                start = temp;
        }
        else {
                //go to the end of the list
               current  = start;
                while(current->link!= NULL) {
                        current = current->link;//is a standard way to move to the next pointer
                }
                current->link = temp;
        }
}//end of insert_end

//This function inserts a node at the beginning of the linked list
void list::insert_begin(void) {
        struct node *temp;

        //create temp node in memory
        temp = new node;

        //input or assign data to temp node
        cout<<"\nEnter the data value for the node: ";
        cin>>temp->data;
        temp->link = NULL;

        //if the list is empty
        if (start == NULL) {
                start = temp;
        }
        else {
                //assign the starting address of list to the linked field of temp and address of temp to the start
                temp->link = start;
                start = temp;
        }
}//end of insert_begin()

//This functiom inserts a node at a particular location in the linked field
void list::insert_location(void) {
        struct node *temp, *current;
        int n, pos = 0;

        //if the list is empty
        if (start == NULL) {
                cout<<"\nlist is empty!";
                return;
        }
        else {
                cout<<"Enter the value to search: ";
                cin>>n;

                //search the value 'n' in the list
                current = start;
                while(current != NULL) {
                        
                        //if value found
                        if(current->data == n) {
                                pos = 1;
                                break;
                        }
                        current = current->link;
                }
        }

        //if the value found then insert the node at thatposition
        if (pos == 1) {
                //create a temp node in the memory
                temp = new node;

                //input data to newly created node 'temp'
                cout<<"\nEnter the data value for the node: ";
                cin>>temp->data;

                //interchange the link value of temp and current
                temp->link = current->link;
                current->link = temp;
        }
        else {
                cout<<"Value not found!";
                return;
        }
}//end of insert_location()

//This function deletes a node from the end of the linked list
void list::delete_end(void) {
        struct node *previous, *current;

        //if the list is empty
        if (start == NULL) {
                cout<<"\nlist is empty!";
                return;
        }
        else {
                //go to the end of the list
               current  = start;
                while(current->link!= NULL) {
                        previous = current;
                        current = current->link;
                }
                cout<<"Data of last node is: "<<current->data;
                previous->link = NULL;
                delete current;
                cout<<endl<<"Last node is deleted!";
        }
}//end of delete_end

//This function deletes the first node of the linked list
void list::delete_begin(void) {
        struct node *current;

        //if the list is empty
        if (start == NULL) {
                cout<<"\nlist is empty!";
                return;
        }
        else {
                current  = start;
                start = current->link;
                cout<<"Data of first node is: "<<current->data;
                delete current;
                cout<<endl<<"First node is deleted!";
        }
}//end of delete_begin

//This function deletes a node from a particular location in the linked list
void list::delete_location(void) {
        struct node *previous, *current;
        int n, pos = 0;

        //if the list is empty
        if (start == NULL) {
                cout<<"\nlist is empty!";
                return;
        }
        else {
                cout<<"Enter the value to search: ";
                cin>>n;

                //search the value 'n' in the list
                current = previous = start;
                while(current != NULL) {
                        
                        //if value found
                        if(current->data == n) {
                                pos = 1;
                                break;
                        }
                        previous = current;
                        current = current->link;
                }

                //delete the node if value found in te list
                if (pos == 1) {

                previous->link = current->link;
                delete current;
                cout<<"Node is deleted!";
        }
        else {
                cout<<"Value not found!";
                return;
        }
        }
}//end of delete_location()

//This function sorts a singly linked list using bubble method
void list::bubble_sort() {
        if(start == NULL) {
                cout<<"List is empty!";
                return;
        }
        struct node *current, *previous;
        int size, temp;
        size = count();  //find the size of list

        //sort the linked list
        for(int u = size; u>1; u--) {
                current = start;
                for(int i = 1; i<u; i++) {
                        previous = current;
                        current = current->link;
                        if(previous->data > current->data) {
                                temp = previous->data;
                                previous->data = current->data;
                                current->data = temp;
                        }
                }//end of inner for loop
        }//end of outer for loop
}//end of bubble sort