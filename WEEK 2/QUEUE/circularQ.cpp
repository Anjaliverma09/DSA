#include <iostream>
#include <queue>
using namespace std;

class cQueue{
    public:
    int* arr;
    int size;
    int front;
    int rear;

    cQueue(int size){
        arr = new int[size]();
        this->size = size;
        front = -1;
        rear = -1;
    }

    void push(int val){
        if((front == 0 && rear == size-1) || (rear == front-1)){
            cout << "Overflow";
            return;
        }
        else if(front == -1 && rear == -1){
            front++;
            rear++;
            arr[rear] = val;
        }
        else if(rear == size-1 && front != 0){
            rear = 0;
            arr[rear] = val;
        }
        else{
            rear++;
            arr[rear] = val;
        }
    }

    void pop(){
        if(front == -1 && rear == -1){
            cout << "Queue is underflow";
            return;
        }
        else if(front == rear){
            arr[rear] = -1;
            front = -1;
            rear = -1;
        }
        else if(front == size-1){
            arr[front] = -1;
            front = 0;
        }
        else{
            arr[front] = -1;
            front++;
        }
    }

    void printQueue(){
        cout << "Printing Queue: ";
        for(int i=0; i<size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    cQueue q(5);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.printQueue();

    q.push(60);

    q.pop();
    q.printQueue();

    q.pop();
    q.printQueue();
    
    q.push(100);
    q.printQueue();

    q.push(110);
    q.printQueue();

    q.push(120);
    q.printQueue();

    return 0;
}