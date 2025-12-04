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
    ~Node(){
        cout << "Destrcutor called for: " << this->data << endl;
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

void deleteNode(Node* &head, Node* &tail, int position){
    int length = getLength(head);
    if(head == NULL){    //empty linked list
       cout << "LL is empty";
    }
    else if(position == 1){
        Node* temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else if (position == length){
        Node* prev = head;

        while(prev->next != tail){
            prev = prev->next;
        }
        prev->next = NULL;
        delete tail;
        tail = prev;
    }
    else{
        Node* prev = NULL;
        Node* curr = head;

       while(position != 1){
        position--;
        prev = curr;
        curr = curr->next;
       } 
       prev->next = curr->next;
       curr->next = NULL;
       delete curr;
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);

    printLL(head);

    deleteNode(head, tail, 3);
    printLL(head);

}   