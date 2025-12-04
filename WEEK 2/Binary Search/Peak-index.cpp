#include <iostream>
using namespace std;
//Peak Index in Mountain element:

int peakIndex(int a[], int n){
    int s = 0; int e = n-1;
    
    while(s < e){
    int mid = (s+e)/2;
        if(a[mid] < a[mid + 1]){        //A wali line m
            //peak right m h
            s = mid + 1;
        }
        else{
            //ya to m B line pr hu 
            //ya m khud peak hu
            e = mid;
        }
        //mid ko update
        mid = (s+e)/2;
    }
    return s;
}

int main(){
    int arr[] = {10,20,50,40,30};
    int n = 5;

    cout << "Peak element is: " << peakIndex(arr, n);
}