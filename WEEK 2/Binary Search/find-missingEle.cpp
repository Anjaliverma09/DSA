#include <iostream>
using namespace std;

int findMissing(int arr[], int n){
    int s = 0; int e = n-1;
    int store = n;     //store will nevr update cuz last element is missing in entire arr       

    while(s <= e){
    int mid = (s+e)/2;
        if((arr[mid]-mid) == 1){
            s = mid + 1;
        }
        else{
           store = mid;
           e = mid - 1; 
        }
    }
    return store + 1;          //sorted array h to ofc jo element miss hoga 
                               //wo apni index se 1 hi to km hoga isly +1 
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = 9;

    cout << "Missing element is: " << findMissing(arr, n);
}