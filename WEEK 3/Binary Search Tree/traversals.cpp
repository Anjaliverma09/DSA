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

void levelOrder(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp->data << " ";
            if(temp->left != NULL){
                q.push(temp->left);
            }
            if(temp->right != NULL){
                q.push(temp->right);    
            }
        }
    }
}

void preOrder(Node* root){
    //NLR
    if(root == NULL)return;
    
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root){
    //LNR
    if(root == NULL)return;
    
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(Node* root){
    //LRN
    if(root == NULL)return;
    
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
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

    levelOrder(root);

    cout << endl << "Inorder: ";
    inOrder(root);
    cout << endl << "preorder: ";
    preOrder(root);
    cout << endl <<  "postorder: ";
    postOrder(root);


    return 0;
}