#include <iostream>
using namespace std;
//Finding the first occurrence of the target element in the sorted array

int findTarget(int a[], int n, int target){
    int start = 0; int end = n-1;
        //int mid = (start + end)/2;
        int mid = start + (end-start)/2;            //BEST PRACTICE cause of int overflow
        int store = -1;

    while(start <= end){
        if(a[mid] == target){
            store = mid;
            end = mid - 1;
        }
        else if(mid > target){
            end = mid - 1;
        }
        else if(mid < target){
            start = mid + 1;
        }
        mid = (start + end)/2;
    }
    return store;
}

int main(){
    int arr[] = {10,20,30,30,30,40,50};         
    int n = 7;
    int target = 30;

    cout << "First 30 Found at index: " << findTarget(arr, n, target);
}