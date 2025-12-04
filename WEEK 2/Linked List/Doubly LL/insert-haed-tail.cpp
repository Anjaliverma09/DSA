#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(){
        this->prev = NULL;
        this->next = NULL;
    }

    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

int getLength(Node* head){
    Node* temp = head;
    int len = 0;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

void print(Node* head){
    Node* temp = head;
    int len = getLength(head);

    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtHead(Node* &head, Node* &tail, int data){
    if(head == NULL){
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;    
    }

    else{
    //1.Create new node
    Node* newNode = new Node(data);
    //2.shift head ka prev to newNode
    head->prev = newNode;
    //3.shift newNode ka next to head
    newNode->next = head;
    //4.head ko shift
    head = newNode;
    }
}

void insertAtTail(Node* &head, Node* &tail, int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(data);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);
    print(head);
    
    cout << "Inserting at tail: " << endl;
    insertAtTail(head, tail, 500);
    print(head);

    return 0;
}