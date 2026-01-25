#include<iostream>
#include<climits>
using namespace std;

class Node{ // This is Tress Node
public: 
    int val;
    Node* left; // address of left Node
    Node* right; // address of right Node
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void displayTree(Node* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
}
int sum(Node* root){ // Sum of Tree
    if(root == NULL) return 0;
    return root->val + sum(root->left) + sum(root->right);
}
int size(Node* root){ // Size of Tree
    if(root == NULL) return 0;
    return 1 + size(root->left) + size(root->right);
}
int maxInTree(Node* root){ // Maximum value of Tree
    if(root == NULL) return INT_MIN;
    int leftMax = maxInTree(root->left);
    int rightMax = maxInTree(root->right);
    return max(root->val,max(leftMax,rightMax));
}
int level(Node* root){ // Levels of Tree
    if(root == NULL) return 0;
    return 1 + max(level(root->left),level(root->right));
}

int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    // Creating connection
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    displayTree(a);
    cout<<endl<<"Sum of Tree = "<<sum(a)<<endl;
    cout<<"Size of Tree = "<<size(a)<<endl;
    cout<<"Maximum Value in Tree = "<<maxInTree(a)<<endl;
    cout<<"Levels of Tree = "<<level(a)<<endl;

}