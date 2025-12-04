#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void printLL(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node*head){
    Node* temp = head;
    int length = 0;

    while(temp != NULL){
        length++;
        temp = temp->next;
    }
    return length;
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

void insertAtPosition(Node* &head, Node* &tail, int data, int position){
    int length = getLength(head);

    if(position <=1){
        insertAtHead(head, tail, data);
    }
    else if(position > length+1){
        insertAtTail(head, tail, data);
    }
    else{
        //insert at middle of LL
        //1. create a new node
        Node* newNode = new Node(data);
        //2.traverse prev. // curr. position
        Node* prev = NULL;
        Node* curr = head;

        while(position != 1){
            prev = curr;
            curr = curr->next;
            position--;
        }
        //3. attach prev to new node
        prev->next = newNode;
        //4. attach new node to curr
        newNode->next = curr;
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);

    printLL(head);

    insertAtPosition(head, tail, 15, 2);    //15 krana h at any position pr
    printLL(head);
}   