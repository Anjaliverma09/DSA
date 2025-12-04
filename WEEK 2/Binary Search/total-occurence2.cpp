#include <iostream>
using namespace std;
//Find Total occurence of the target
//Large arrays ke liye O(log n) is far better than O(n)

int findFirstOcc(int a[], int n, int target){
    int start = 0; int end = n-1;
        int mid = (start + end)/2;
        int store = -1;

    while(start <= end){
        if(a[mid] == target){
            store = mid;
            end = mid - 1;
        }
        else if(a[mid] > target){
            end = mid - 1;
        }
        else if(a[mid] < target){
            start = mid + 1;
        }
        mid = (start + end)/2;
    }
    return store;
}

int findLastOcc(int a[], int n, int target){
    int start = 0; int end = n-1;
        int mid = (start + end)/2;
        int store = -1;

    while(start <= end){
        if(a[mid] == target){
            store = mid;
            start = mid + 1; 
        }

        else if(a[mid] > target){
            end = mid - 1;
        }
        else if(a[mid] < target){
            start = mid + 1;
        }
        mid = (start + end)/2;
    }
    return store;
}

int findTarget(int a[], int n, int target){
    int firstOcc = findFirstOcc(a, n, target);
    int lastOcc = findLastOcc(a, n, target);
    int totalOcc = lastOcc - firstOcc + 1;

    return totalOcc;
}

int main(){
    int arr[] = {10,20,30,30,30,40,50};
    int n = 7;
    int target = 30;

    cout << "Total Occurence: " << findTarget(arr, n, target);
}