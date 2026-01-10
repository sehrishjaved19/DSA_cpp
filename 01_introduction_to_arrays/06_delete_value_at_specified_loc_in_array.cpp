/*
Algorithm - Deleting a value from specific location
1- START
2- INPUT location into LOC
3- [Check the value in location LOC whether it is a valid [position in an array 'XYZ']
    IF (LOC>=N) THEN
        PRINT "Invalid position"
        RETURN TO Step-2
    END IF
4- [Move values each element from the specified location one step towards the beginning]
    REPEAT FOR C= LOC TO N-1
        COUNTRY[C] = COUNTRY[C+1]
    [End of loop]
    COUNTRY[N-1] = NULL
5- END
*/

// Program that deletes a value from a specified location of an array
#include<iostream>
using namespace std;
class Delete_element {
    private:
    int arr[5];
    public:

    //member function to assign values
    void assign(int p[]) {
        for (int i = 0; i<5 ; i++){
            arr[i] = p[i];
        }
    }

    //member function to delete a value
    void del(int loc) {
        for(int i = loc; i<5; i++) {
            arr[i] = arr[i+1];
        }
        arr[4] = 0;
    }

    //member function to print values of array
    void display() {
        for (int i = 0; i<=4; i++) {
            cout<<arr[i]<<endl;
        }
    }
};
int main() {
    Delete_element obj;
    int pos, n;
    int a[5] = {44, 55, 6, 3, 66};
    obj.assign(a);
    cout<<"Values before deletion"<<endl;
    obj.display();
    cout<<"Enter position to delete: ";
    cin>>pos;
    if(pos>= 5)
    {
        cout<<"Invalid position";
        return 0;
    }
    obj.del(pos-1);
    cout<<"Values after deletion are as follows: "<<endl;
    obj.display();
    return 0;
}