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
    if(root == NULL){       //first node
        root = new Node(data);
        return root;
    }
    if(data > root->data){
        root->right = insertBST(root->right, data);
    }
    if(data < root->data){
        root->left = insertBST(root->left, data);
    }
    return root;
}

Node* minValue(Node* root){
    if(root == NULL){
        cout << "no min value" << endl;
        return NULL;
    }    
    Node* temp = root;

    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}

Node* maxValue(Node* root){
    if(root == NULL){
        cout << "root is null" << endl;
        return NULL;
    }
    Node* temp = root;

    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}

void createBST(Node* &root){
    cout << "Enter data: " <<endl;
    int data;
    cin >> data;

    while(data != -1){
       root = insertBST(root, data);
       cout << "Enter data: " <<endl;
       cin >> data; 
    }
}

int main(){
    Node* root = NULL;
    createBST(root);

 
    Node* minNode = minValue(root);
    if(minNode == NULL) 
    cout << "No min node cause root is null" << endl;

    else{
       cout << endl << "Min value of tree: " << minNode->data;
    }
 
    Node* maxNode = maxValue(root);
    if(maxNode == NULL) 
    cout << "No min node cause root is null" << endl;

    else{
       cout << endl << "Min value of tree: " << maxNode->data;
    }

    return 0;
}