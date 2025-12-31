#include <iostream>
#include <unordered_map>
using namespace std;
//Chcek a LL is circular or not

class ListNode {
public:
    int data;
    ListNode* next;

    ListNode(int val) {
        data = val;
        next = NULL;
    }
};

bool isCircular(ListNode* head) {
    if (head == NULL)
        return false;  // empty list can't be circular

    unordered_map<ListNode*, bool> mapping;
    ListNode* temp = head;

    while (temp != NULL) {
        // if node already visited → loop exists
        if (mapping.find(temp) != mapping.end())
            return true;

        mapping[temp] = true;
        temp = temp->next;
    }

    return false; 
}

int main(){
    
    // Create nodes
    ListNode* head = new ListNode(1);
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(3);
    ListNode* fourth = new ListNode(4);

    // Link nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = head; 

    cout << isCircular(head);
}