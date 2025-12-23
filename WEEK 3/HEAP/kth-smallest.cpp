#include <iostream>
using namespace std;
//galat code

class Heap{
    public:
        int *arr;
        int capacity;
        int size;

    Heap(int capacity){
        this->arr = new int[capacity];
        this->capacity = capacity;
        this->size = 0;
    }    
};

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

void findSmallest(int arr[], int n, int k){
    heapify(arr, k, 1);
    int i = 1;
    int top = arr[1]; 
    if(arr[(k+i)] > top){
        arr[k + i] = top;
        i++;
        arr.push_back(k+i);
    }
    heapify(arr, k);
}

int main(){
    int arr[] = {-1,5,8,10,2,4};
    int n = 5;
    int k = 3;
    findSmallest(arr, n, k);

    buildHeap(arr, n);

    // Print heap
    cout << "kth smallest element Heap: ";
    for(int i = 1; i <= n; i++)
        cout << arr[i] << " ";
    cout << endl;
}