#include <iostream>
using namespace std;
//head se phle 500 and tail ke baad 600 shift position

class Node{
    public: 
    int data;
    Node* next;

    // Parameterized constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void printLL(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp -> next;
    }
    cout << endl;
}

void insertAtHead(Node* &head, Node* &tail, int data){
    if(head == NULL){
        //empty LL
        //1. create new node
        Node* newNode = new Node(data);
        //2. update head
        head = newNode;
        tail = newNode;
    }
    else{
        //Non-empty LL
        //1.create new node
        Node* newNode = new Node(data);
        //2.attach new node to head node
        newNode -> next = head;
        //3.update head
        head = newNode;
    }
}

void insertAtTail(Node* &head, Node* &tail, int data){
    if(tail == NULL){
        //empty LL
        //1. create new node
        Node* newNode = new Node(data);
        //2. update head
        head = newNode;
        tail = newNode;
    }
    else{
        //1. create new node
        Node* newNode = new Node(data);
        //2. attach new node to tail
        tail -> next = newNode;
        //3. update tail
        tail = newNode;
    }
}

int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    //linked list created

    Node* head = first;
    Node* tail = fifth;   // last node ka address
    printLL(head); 

    insertAtHead(head, tail, 500);
    printLL(head);

    insertAtTail(head, tail, 600);
    printLL(head);
}