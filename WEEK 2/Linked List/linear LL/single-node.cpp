#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void printLL(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void insertHead(Node* &head, Node* &tail, int data) {
    if (head == NULL) {
        // Empty list case (single node create)
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;   // dono same node pe point karenge
    }
    else {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    // Pehle empty list hai
    printLL(head);   // Output: NULL

    // 1st node insert (ab single node list ban gayi)
    insertHead(head, tail, 100);
    printLL(head);   // Output: 100->NULL

    // 2nd node insert head pe
    insertHead(head, tail, 200);
    printLL(head);   // Output: 200->100->NULL
}
