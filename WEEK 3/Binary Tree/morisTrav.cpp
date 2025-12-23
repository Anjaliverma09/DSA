#include <iostream>
#include <vector>
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

vector<int> inorderTraversal(Node* root){
    vector<int>ans;
    Node* curr = root;

    while(curr){
        if(curr->left == NULL){
            ans.push_back(curr->data);
            curr = curr->right;
        }

        else{
            Node* pred = curr->left;
            while(pred->right != NULL && pred->right != curr){
                pred = pred->right;
            }

            //agr right null h tbhi link stablish krng
            if(pred->right == NULL){
                pred->right = curr;
                curr = curr->left;
            }

            else{
                pred->right = NULL;
                ans.push_back(curr->data);
                curr = curr->right;
            }
        }
    } 
    return ans;
}

int main(){
    Node* root = createTree();
    cout << "root: " << root->data << endl;

    vector<int> ans = inorderTraversal(root);
    cout << "Inorder Traversal: ";
    for(int x : ans) cout << x << " ";
    cout << endl;
}
