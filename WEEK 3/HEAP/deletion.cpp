#include <iostream>
using namespace std;

class Heap{
    public:
        int *arr;
        int capacity;
        int size;

    Heap(int capacity){
        this->arr = new int [capacity];
        this->capacity = capacity;
        this->size = 0;
    }

    void insert(int val){
        if(size == capacity){
            cout << "Heap overflow" <<endl;
            return;
        }
        
        size++;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parentIdex = index/2;
            if(arr[index] > arr[parentIdex]){
                swap(arr[index] , arr[parentIdex]);
                index = parentIdex;
            }
            else break;
        }
    }
    void printHeap(){
        for(int i=1; i<=size; i++){
        cout << arr[i] << " ";
        }
        cout << endl;
    }
    int deleteHeap(){
        int answer = arr[1];
        arr[1] = arr[size];

        size--; 
        int index = 1;
        while(index < size){
            int leftIndex = 2*index;
            int rightIndex = 2*index + 1;

            int largestIndex = index;
            
            if(leftIndex <= size && arr[largestIndex] < arr[leftIndex])
                largestIndex = leftIndex;

            if(rightIndex <= size && arr[largestIndex] < arr[rightIndex])
                largestIndex = rightIndex;

            if(index == largestIndex)
                break;

            else{
                swap(arr[index], arr[largestIndex]);
                index = largestIndex;
            }
        }
        return answer;
    }
};

int main(){
Heap h(20);
    //insertion
    h.insert(10);
    h.insert(20);   
    h.insert(5);
    h.insert(11);
    h.insert(6);

    cout << "Printing Heap: " << endl;
    h.printHeap();  

    int ans = h.deleteHeap();
    cout << "Anser: " << ans << endl;
    cout << "Printing Heap: " << endl;
    h.printHeap();

    return 0;
}