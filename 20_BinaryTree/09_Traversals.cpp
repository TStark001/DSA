/*
#   LeetCode-144 :- Binary Tree Preorder Traversal
#   LeetCode-94 :- Binary Tree Inorder Traversal
#   LeetCode-145 :- Binary Tree Postorder Traversal
!       This is also called DFS(Depth First Search) Traversal
*/
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
//$ PreOrder Traversals (LeetCode-144)
void preOrder(Node* root){
    if(root == NULL) return;
    cout<<root->val<<" "; // root
    preOrder(root->left); // left
    preOrder(root->right); // right
}
//$ InOrder Traversals (LeetCode-94)
void inOrder(Node* root){
    if(root == NULL) return;
    inOrder(root->left); // left
    cout<<root->val<<" "; // root
    inOrder(root->right); // right
}
//$ PostOrder Traversals (LeetCode-145)
void postOrder(Node* root){
    if(root == NULL) return;
    postOrder(root->left); // left
    postOrder(root->right); // right
    cout<<root->val<<" "; // root
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
    cout<<"Pre Order Traversal : ";
    preOrder(a);
    cout<<endl<<"In Order Traversal : ";
    inOrder(a);
    cout<<endl<<"Post Order Traversal : ";
    postOrder(a);
}