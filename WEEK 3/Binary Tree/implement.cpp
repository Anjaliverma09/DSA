#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

    Node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }    
};

Node* createTree(){         //return node type
    cout << "Enter the value: ";
    int data;
    cin >> data;

    if(data == -1){
        return NULL;
    }

    //create new node
    Node* root = new Node(data);
    //left node by recursion
    cout << "Left of node: " << root->data << endl;
    root->left = createTree();
    //right node by recursion
    cout << "Right of node: " << root->data << endl;
    root->right = createTree();

    return root;
}

int main(){
    Node* root = createTree();
    cout << root->data << endl;

    return 0;
}