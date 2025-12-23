#include <iostream>
#include <queue>
using namespace std;
//finding kth-smallest elements in max-heap 

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

int kthSmallest(int arr[], int n, int k){
    priority_queue<int> pq;
    for(int i=0; i<k; i++){
        int element = arr[i];
        pq.push(element);
    }
     // Step 2: for remaining elements
    for(int i=k; i<n; i++){
        int element = arr[i];
        if(element < pq.top()){
            pq.pop();
            pq.push(element);
        }
    }
    // Step 3: top of heap is kth smallest
    int ans = pq.top();
    return ans;
}

int main(){
    int arr[] = {5,8,10,2,4};
    int n = 5;
    int k = 3;

    cout << "Kth Smallest element: " << kthSmallest(arr, n, k);

  
    return 0;
}