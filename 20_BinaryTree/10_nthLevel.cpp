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
int level(Node* root){ // Levels of Tree
    if(root == NULL) return 0;
    return 1 + max(level(root->left),level(root->right));
}
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
/*
    this will print in reverse order
    output:-
            1 
            3 2 
            7 6 5 4 
*/ 
void nthLevelRev(Node* root,int curr,int level){
    if(root == NULL) return;
    if(curr==level) {
        cout<<root->val<<" ";
        return;
    } 
    nthLevelRev(root->right,curr+1,level); 
    nthLevelRev(root->left,curr+1,level); 
}
void levelOrder(Node* root){
    int n = level(root);
    for(int i = 1 ; i<=n ; i++){
        nthLevel(root,1,i);
        cout<<endl;
    }
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
    levelOrder(a);
}