/*
// Write an algorithm that sorts an array ARR consisting of N elements using the Quick sort
1- START
2- Inout dtat into array ARR
3- Choose a pivot point
4- Put all the values smaller than that of pivot on one side i.e. left side and all the values greater than pivot on the other side i.e. right side. The array is divided into two halves based on the pivot value.
5- Recursively sort each half of the array using the same procedure following step-3 and step-4 until the entire array is sorted.
6- EXIT
*/

//Program to sort an array having 7 elements using the Quick sort method.
#include<iostream>
using namespace std;

void quicksort(int [], int, int);
int partition(int [], int, int);

void quicksort(int arr[], int first, int last) {
    int split_point;
    if(first < last) {
        split_point = partition(arr, first, last);
        //sort left and right 
        quicksort(arr, first, split_point-1);
        quicksort(arr, split_point+1, last);
    }
}//end of quick sort

int partition(int arr[], int first, int last) {
    int temp, L, R, pivot = arr[first];
    L = first + 1;
    R = last;
    while(1) {
        while(arr[L]<=pivot && L <=R) {
            L++;
        }
        while(arr[R]>=pivot && R >=L) {
            R--;
        }
        if(R<L) {
            temp = arr[first];
            arr[first] = arr[R];
            arr[R] = temp;
            break;
        }
        else {
            temp = arr[L];
            arr[L] = arr[R];
            arr[R] = temp;
            L++;
            R--;
        }
    }
    return R;
}
int main()
{
    int i, arr[7] = {2,15,1,61,11,47,8};
    cout<<"\nArray before sorting"<<endl;
    for(i = 0; i<7; i++) {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    quicksort(arr, 0, 6);
    cout<<"\nArray after sorting"<<endl;
    for(i = 0; i<7; i++) {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    return 0;
}