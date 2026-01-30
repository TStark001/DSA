// Print element of nth level
#include<iostream>
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
void preOrder(Node* root){
    if(root == NULL) return;
    cout<<root->val<<" "; 
    preOrder(root->left);
    preOrder(root->right); 
}
void nthLevel(Node* root,int curr,int level){
    if(root == NULL) return;
    if(curr==level) cout<<root->val<<" "; 
    nthLevel(root->left,curr+1,level); 
    nthLevel(root->right,curr+1,level); 
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
    nthLevel(a,1,3);
}