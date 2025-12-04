#include <iostream>
using namespace std;

int findTarget(int arr[], int Target, int n){
    int s = 0; int e = n-1;
    while(s <= e){
        int mid = (s + e)/2;
        if(arr[mid] == Target){
            return mid;
        }
        else if(arr[mid] < Target){
            s = mid + 1;
        }
        else if(arr[mid] > Target){
            e = mid - 1;
        }
        mid = (s + e)/2;
    }
    return -1;
}

int main(){
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int Target = 90;
    int n = 9;

    int ans = findTarget(arr, Target, n);

    cout << ans;
}