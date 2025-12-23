#include <iostream>
#include <queue>
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

Node* insertBST(Node* root, int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }
    if(data > root->data) 
        root->right = insertBST(root->right, data);
    
    if(data < root->data) 
        root->left = insertBST(root->left, data);

    return root;
}

void createBST(Node* &root){
    int data;
    cout << "Enter data: " << endl;
    cin >> data;

    while(data != -1){
        root = insertBST(root, data);
        cout << "Enter data: " << endl;
        cin >> data;
    }
}

bool findTarget(Node* root, int target){
    if(root == NULL) return false;
    
    if(root->data == target) return true;

    bool leftAns = false;
    bool righttAns = false;
    if(target > root->data)
        righttAns = findTarget(root->right, target);
    
    else leftAns = findTarget(root->left, target);

    return leftAns || righttAns;
}

int main(){
    Node* root = NULL;
    createBST(root);
    cout << "BST created" << endl;

    int tar;
    cout << "Enter the target: ";
    cin >> tar;

    while(tar != -1){
        bool ans = findTarget(root, tar);
        if(ans == true) cout << "Target found" << endl;
        else cout << "Target not found" << endl;
    
    cout << "Enter the target: ";
    cin >> tar;
}

    return 0;
}