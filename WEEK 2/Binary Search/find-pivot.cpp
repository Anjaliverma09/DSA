#include <iostream>
using namespace std;
//Finding max pivot element in rotate array:

int findPivot(int a[], int n){
    int s = 0; int e = n-1;
    int mid = (s+e)/2;

    while(s <= e){
        if(s == e)               //single element case jb pivot present n ho
            return s;

        else if(a[mid] < a[mid-1])        //14 < 16
            return mid - 1;         //means return 16 

        else if(a[mid] > a[mid+1])  //16 > 2
            return mid;             //means return 16 
        
        else if(a[s] > a[mid])     //B line, shift left
            e = mid - 1;
        
        else
            s = mid + 1;
    
    mid = (s+e)/2;    
    }
    return -1;
}

int main(){
    int arr[] = {12,14,16,18,2,4,6,8};
    int n = 8;  

    cout << "Highest pivot element at index: " << findPivot(arr, n);
}