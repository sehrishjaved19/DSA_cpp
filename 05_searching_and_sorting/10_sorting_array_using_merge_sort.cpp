/*
// Write an algorithm that sorts an array ARR consisting of N elements using the Merge sort.
Algorithm- Merge Sorting
1-  START
2-  If array ARR has only one element, it is already sorted, THEN
        EXIT
    ELSE
        Divide the array recursively into teo halves until it cannot be further divided
    END IF
3-  Merge the smaller sub-arrays into a new array in sorted order
4-  EXIT
*/

//Program to sort an array having 7 elements using the Merge sorting method.
#include<iostream>
using namespace std;

void mergesort(int [], int, int);
void merge(int [], int, int, int);

void mergesort(int arr[], int start, int end) {
    if(start < end) {
        int mid = (start+end)/2;

        //sort first and second halves 
        mergesort(arr, start, mid);
        mergesort(arr, mid+1, end);
        merge(arr, start, mid, end);
    }
}//end of quick sort

void merge(int arr[], int start, int mid, int end) {
    int i, j, k;
    int n1 = mid - start +1;
    int n2 = end - mid;
    int L[n1], R[n2]; //create temp array for left sub-array and right sub-array
    for(i = 0; i<n1; i++) { //copy data to temp array L[]
        L[i] = arr[start+i];
    }
    for(j=0;j<n2;j++) {  //copy data to temp array R[]
        R[j] = arr[mid+1+j];
    }

    //Now merge the temp arrays back into arr[] in sorted order
    i = 0; //initial index of first sub-array L[]
    j = 0; //initial index of second sub-array R[]
    k = start; //initial index of merged sub-array

    //merge data of L and R sub-arrays in sorted order
    while(i<n1 && j<n2) {
        if(L[i]<= R[j]) {
            arr[k] = L[i]; //copy from left sub array;
            i++;
        }
        else 
        {
            arr[k] = R[j]; //copy from right sub array;
            j++;
        }
        k++;
    }

    //This loop copies remaining (if any) elements of L[] into arr[]
    while(i<n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    //This loop copies remaining (if any) elements of R[] into arr[]
    while(j<n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
int main()
{
    int i, arr[] = {12,11,13,5,6,7};
    cout<<"\nArray before sorting"<<endl;
    for(i = 0; i<6; i++) {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    mergesort(arr, 0, 5);
    cout<<"\nArray after sorting"<<endl;
    for(i = 0; i<6; i++) {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    return 0;
}