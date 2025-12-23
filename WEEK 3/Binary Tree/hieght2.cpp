#include <iostream>
#include <queue>
using namespace std;
//finding hieght using level order 

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

int levelOrder(Node* root){
    if(root == NULL) return 0; 

    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int count = 1;

    while(q.size() > 1){
        Node* front = q.front();
        q.pop();

        if(front == NULL){
            cout << endl;
            count ++;
            q.push(NULL);
        }
        else{
            cout << front->data << " ";

            if(front->left != NULL) q.push(front->left);
        
            if(front->right != NULL) q.push(front->right);
        }
    }
    return count;
}

int main(){
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(30);

    int total = levelOrder(root);
    cout << endl << "Height: " << total;
    
}