/*
// Write an algorithm that creates a linked list of values consisting of ten nodes and displays the data of nodes on the screen.
Algorithm-Creating Linked list
1-  START 
2-  Define the structure of the node. Suppose the structure of te node is as follows;
        struct node {
        int data;
        node *list;
        };
3-  Declare three pointer variables START, TEMP, nad, CURRENT of type node 
4-  REPEAT Step-5 to 10 FOR C = 1 to 10
5-  INPUT data value for the node in X
6-  Create a TEMP node in memory
7-  Assign the values in TEMP node
        TEMP->data = X
        TEMP->link = NULL
8-  [If the list is empty, then assign the address of TEMP to START]
        IF START = NULL then START = TEMP
9-  [If list is not empty, then go to the end of the list. First, assign the value of START into CURRENT, and then go to the end of the list via CURRENT pointer]
        CURRENT = START
        WHILE(CURRENT->link!= NULL)  [go to end of list]
            CURRENT = CURRENT->link
        END WHILE
10- [Assign value of the newly created node to the list field of the last node]
    CURRENT->list = TEMP
11- Display the data of all nades of the list
12- EXIT
*/

//Program that creates a new linked list of student records and displays the records on screen.
#include<iostream>
#include <cstring>
using namespace std;

struct std_node {
    int roll_no;
    char name[15];
    std_node *link;
};

class std_list {
    private:
    std_node *start, *current, *temp;
    public:
    std_list(void) {
        start = NULL;
    }
    void insert(int, char []);
    void display(void);
};

void std_list::insert(int rn, char nm[]) {
    //create a temp node in memory
    temp = new std_node;

    //assign data to a node temp
    temp->roll_no = rn;
    strcpy(temp->name, nm);
    temp->link = NULL;

    //if linked list is empty then assign address of temp to start
    if(start == NULL) {
        start = temp;
    }

    //if linked list is not empty, then 
    else {
        current = start;

        //go to end of list
        while(current->link != NULL)
        {
            current = current->link;
        }

        //assign address of temp to the link field of current
        current->link = temp;
    }
}//end of insert()

void std_list::display(void) {
    if(start == NULL) {
        cout<<"List is empty"<<endl;
        return;
    }
    else{
        int rec = 1;
        current = start;
        while(current != NULL) {
            cout<<"\nRecord #"<<rec<<endl;
            cout<<"Roll number: "<<current->roll_no<<endl;
            cout<<"Name: "<<current->name<<endl;
            cout<<"\n---"<<endl;
            current = current->link;
            rec++; 
        }
    }
}
int main()
{
    std_list obj;
    int rn, rec = 1;
    char nm[15];

    cout<<"\nEnter records of five students"<<endl;
    do{
        cout<<"\nEnter Record #"<<rec<<endl;
        cout<<"Enter roll number: ";
        cin>>rn;
        cout<<"Enter name: ";
        cin>>nm;

        //add record into list by calling function "insert()"
        obj.insert(rn, nm);
        rec++;
        cout<<"\n---"<<endl;
    }
    while(rec<=5);

    //display records of students stored in linked list
    cout<<"--------------------------";
    cout<<endl<<"Data of the list: \n";
    cout<<"--------------------------"<<endl;
    obj.display();
    return 0;
}