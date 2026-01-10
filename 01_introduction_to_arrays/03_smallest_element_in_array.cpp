/*
Algorithm - snallest values in linear array
1- START
2- Input N values in array XYZ
3- SMALLEST = XYZ[0]
4- REPEAT FOR C=0 TO [N-1] BY 1
    IF XYZ[C]<SMALLEST THEN
        SMALLEST =  XYZ[C]
    END IF
[End of loop]
5- PRINT SMALLEST
6-END
*/

// Program to find out the smallest value of the array
#include<iostream>
using namespace std;
class Smallest {
    private:
    int arr[5];
    public:
    void input() {
        cout<<"Enter values in arrays, after each value press enter!"<<endl;
        for(int i=0; i<5;i++) {
            cin>>arr[i];
        }
    }
    void find_smallest() {
        int smallest = arr[0];
        for(int i=0; i<5;i++) {
            if(arr[i]<smallest) {
                smallest = arr[i];
            }
        }
        cout<<"\nThe Smallest value in the array is  "<<smallest<<endl;
    }
};
int main() {
    Smallest obj;
    obj.input();
    obj.find_smallest();
    return 0;
}