#include <iostream>
using namespace std;
//finding height by pre define nodes 

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

int maxdepth(Node* root){
    if(root == NULL) return 0;

    int leftHeight = maxdepth(root->left);
    int rightHeight = maxdepth(root->right);

    int height = max(leftHeight, rightHeight) + 1;
    return height;
}

int main(){
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(30);     

    int height = maxdepth(root);
    cout << "Maximum depth: " << height;
}