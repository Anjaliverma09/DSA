#include <iostream>
using namespace std;

class Heap{
    public:
        int *arr;
        int capacity;
        int size;

    heap(int capacity){
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
    for(int i = n/2; i > 0; i--){
        heapify(arr, n, i);
    }
}

void heapSort(int arr[], int n){
    while(n != 1){
        swap(arr[1], arr[n]);
        n--;
        heapify(arr, n, 1);
    }
}

int main(){
    int arr[] = {-1,7,10,20,5,100,2};
    int n = 6;
    buildHeap(arr, n);


    cout << "Printing Heap: ";
    for(int i = 1; i <= 6; i++){
        cout << arr[i] << " ";
    }
    cout << endl;    

    cout << "Sorted Heap: ";
    heapSort(arr, n);
    for(int i = 1; i <= 6; i++){
        cout << arr[i] << " ";
    }
    cout << endl;    
}