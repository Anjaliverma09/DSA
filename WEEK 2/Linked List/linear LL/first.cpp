#include <iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node* next;

    // Default constructor
    Node(){
        cout << "Default constructor called " << endl;
        this->next = NULL;
    }

    // Parameterized constructor
    Node(int data){
        //cout << "Parameterized constructor called " << endl;
        this->data = data;
        this->next = NULL;
    }

};

int printLL(Node* head){
    Node* temp = head;
    int length = 0;

    while(temp != NULL){
        cout << temp->data << "->";
        length++;
        temp = temp -> next;
    }
    cout << endl;
    return length;
}

int main(){
    //creation of node
    //static allocation
    //Node a;         // calls default constructor

    //dynamic allocation calls peramiterized constructor
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
    
    cout << "Length of LL is: " << printLL(head);
}