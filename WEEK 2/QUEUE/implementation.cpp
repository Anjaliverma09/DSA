#include <iostream>
#include <queue>
using namespace std;

class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size){
        arr = new int[size]();
        this->size = size;
        front = -1;
        rear = -1;
    }

    void push(int val){
        if(front == -1 && rear == -1){
            //empty case
            front++;
            rear++;
            arr[rear] = val;
        }
        else if(rear == size-1){
            //queue full
            cout << "Queue is overflow" << endl;
            return;
        }
        else{
            rear++;
            arr[rear] = val;
        }
    }

    void pop(){
        if(front == -1 && rear == -1){
            cout << "cant pop Queue is empty" << endl;
            return;
        }
        else if(front == rear){
            //single element
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else{
            arr[front] = -1;
            front++;
        }
    }

    bool isEmpty(){
        if(front == -1 && rear == -1){
            return true;
        }
        else{
            return false;
        }
    }

    int getSize(){
        if(front == -1 && rear == -1){
            return rear - front;
        }
        else return rear - front + 1;
    }

    int getFront(){
        if(front == -1){
            cout << "Queue is empty, cant give front element ";
            return -1;
        }
        else return arr[front];
    }

    int getRear(){
       if(front == -1){
            cout << "Queue is empty, cant give rear element ";
            return -1;
        } 
        else return arr[rear];
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
    Queue q(5);
    q.printQueue();         //member function

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.printQueue();
    cout << "size: " << q.getSize() << endl;

    q.pop();
    q.printQueue();
    cout << "size: " << q.getSize() << endl;

    cout << "Queue is empty:  " << q.isEmpty() << endl;

    cout << "front is: " << q.getFront() << endl;
    cout << "rear is: " << q.getRear() << endl;

    q.pop();
    q.pop();
    q.pop();
    q.pop();
    cout << "size: " << q.getSize() << endl;


    return 0;
}