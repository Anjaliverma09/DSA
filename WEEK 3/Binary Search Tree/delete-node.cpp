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

Node* deleteNode(Node* root, int target){
    if(root == NULL) return NULL;
    if(target == root->data){
        //1. leaf node
        if(root->left == NULL && root->right == NULL){
            delete root;;
            return NULL;
        }    
        //2. only right null
        else if(root->left != NULL && root->right == NULL){
            Node* childSubTree = root->left;
            delete root;
            return childSubTree;
        }

        //3. only left null
        else if(root->left == NULL && root->right != NULL){
            Node* childSubTree = root->right;
            delete root;
            return childSubTree;
        }
        //4. left and right both are non null
        else{
            Node* maximum = maxValue(root->left);
            root->data = maximum->data;
            root->left = deleteNode(root->left, maximum->data);
            return root;
        }
    }
    else if(root->data > target){   //left
        root->left = deleteNode(root->left, target);
    }
    else{   //right
        root->right = deleteNode(root->right, target);
    }
    return root;
}

int main(){
    Node* root = NULL;
    createBST(root);
    cout << "BST created" << endl;
    levelOrder(root);

    Node* maxNode = maxValue(root);
    if(maxNode == NULL) 
    cout << "No min node cause root is null" << endl;

    else{
       cout << endl << "Max value of tree: " << maxNode->data << endl;
    }

    int target;
    cout << "Enter the val of target: ";
    cin >> target;

    while(target != -1){
        root = deleteNode(root, target);
        cout << "Level order: " << endl;
        levelOrder(root);

        cout << "Enter the val of target: ";
        cin >> target;
    }

    return 0;
}