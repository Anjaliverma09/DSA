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

Node* createTree(){  
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

// -------- Traversals ---------
void preOrder(Node* root){
    //base case
    if(root == NULL){
        return;
    }
    
    //N
    cout << root->data << " ";
    //L
    preOrder(root->left);
    //R
    preOrder(root->right);
}

void inOrder(Node* root){
    if(root == NULL){
        return;
    }
    //L
    inOrder(root->left);
    //N
    cout << root->data << " ";
    //R
    preOrder(root->right);
}

void postOrder(Node* root){
    if(root == NULL){
        return;
    }
    //L
    postOrder(root->left);
    //R
    postOrder(root->right);
    //N
    cout << root->data << " ";
}

int main(){
    Node* root = createTree();
    cout << root->data << endl;

    cout << "\nPreOrder Traversal: ";
    preOrder(root);

    cout << "\nInOrder Traversal: ";
    inOrder(root);

    cout << "\nPostOrder Traversal: ";
    postOrder(root);
}