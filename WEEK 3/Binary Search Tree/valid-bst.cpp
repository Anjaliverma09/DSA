#include <iostream>
#include <limits.h>
using namespace std;
//finding if a tree is valid BST or not

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

bool solve(Node* root, long long int lowerBound, long long int upperBound){
    if(root == NULL) return true;

    bool cond1 = (root->data > lowerBound);
    bool cond2 = (root->data < upperBound);
    bool leftAns = solve(root->left, lowerBound, root->data);
    bool rightAns = solve(root->right, root->data, upperBound);
        
    return (cond1 && cond2 && leftAns && rightAns);
 }

bool isValidBST(Node* root){
    long long int lowerBound = -2147483648;
    long long int upperBound = 2147483647;

    bool ans = solve(root, lowerBound, upperBound);
    return ans;
}

int main(){
    Node* root = new Node(10);

    root->left = new Node(5);
    root->right = new Node(30);

    bool ans = isValidBST(root);
    cout << ans;

    return 0;
}