#include <iostream>
using namespace std;
//heapify using recursion

void heapify(int *arr, int n, int index){
    int leftIndex = 2*index;
    int rightIndex = 2*index + 1;
    int largestIndex = index;

    if(leftIndex <= n && arr[leftIndex] > arr[largestIndex])
        largestIndex = leftIndex;
    if(rightIndex <= n && arr[rightIndex] > arr[largestIndex])
        largestIndex = rightIndex;

        if(index != largestIndex){
            swap(arr[index], arr[largestIndex]);
            index = largestIndex;

            heapify(arr, n, index);
        }
}

void buildHeap(int arr[], int n){
    // Build max heap
    for(int i = n/2; i >= 1; i--){
        heapify(arr, n, i);
    }
}

int main(){
    int arr[6]; // 1-based indexing
    int n = 5;

    // Insert elements
    arr[1] = 10;
    arr[2] = 20;
    arr[3] = 5;
    arr[4] = 11;
    arr[5] = 6;

    buildHeap(arr, n);

    // Print heap
    cout << "Max Heap: ";
    for(int i = 1; i <= n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}