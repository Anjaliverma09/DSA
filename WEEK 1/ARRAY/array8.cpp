#include <iostream>
using namespace std;

void shiftArray(int a[], int n){
    int store = a[n-1];       // storing 50 at the location store 

    for(int i=n-1; i>0; i--){
        a[i] = a[i-1];
    }

    a[0] = store;
}

int main(){
    int a[] = {10,20,30,40,50};
    int n = 5;
    // int store = 50;  ye bhi kr skte hn

    shiftArray(a,n);

    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
}