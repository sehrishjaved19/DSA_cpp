// Program that inputs data into table and finds out the largest and the smallest values entered in the table.
#include<iostream>
using namespace std;
int main() {
    int table[3][4];
    int r,c,max,min,mx_r,mn_r,mx_c,mn_c;
    r = 0;
    while(r<=2) {
        for(c = 0; c<=3; c++) {
            cout<<"Enter value int row "<<r<<" and coloumn "<<c<<": ";
            cin>>table[r][c];
        }
        r++;
    }

    max = min = table[0][0];
    for(r=0;r<=2; r++) {
        for(c = 0; c<=3; c++) {
            if(max<table[r][c])
            {
                max = table[r][c];
                mx_r = r;
                mx_c = c;
            }
            if(min > table[r][c]) 
            {
                min = table[r][c];
                mn_r = r;
                mn_c = c;
            }
        }
    }
    cout<<"\nThe largest value is "<<max<<endl;
    cout<<"Largest value is at Location["<<mx_r<<"]["<<mx_c<<"]\n";
    cout<<"\nThe smallest value is "<<min<<endl;
    cout<<"Smallest value is at Location["<<mn_r<<"]["<<mn_c<<"]\n";  
    return 0;
}