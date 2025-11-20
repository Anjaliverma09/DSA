#include<iostream>
using namespace std;

void rotateArr(int arr[], int n, int k){
    int temp[n];
    for(int i=0; i<n; i++){
        int newArr = (i + k) % n;
        temp[newArr] = arr[i];
    }

    for(int i=0; i<n; i++){
        arr[i] = temp[i];
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = 7;
    int k = 3;

    rotateArr(arr, n, k);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}