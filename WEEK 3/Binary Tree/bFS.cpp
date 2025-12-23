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

void levelOrder(Node* root){
    if(root == NULL) return; 

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(q.size() > 1){
        Node* front = q.front();
        q.pop();

        if(front == NULL){
            cout << endl;
            q.push(NULL);
        }
        else{
            cout << front->data << " ";

            if(front->left != NULL) q.push(front->left);
        
            if(front->right != NULL) q.push(front->right);
        }
    }
}

int main(){
    Node* root = createTree();
    cout << "root: " << root->data << endl;

    cout << "Lvel order: ";
    levelOrder(root);
    cout << endl;

    return 0;
}