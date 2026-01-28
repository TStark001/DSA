/*
#   LeetCode-236 :- Lowest Common Ancestor of Binary Tree
Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree.

According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself).”

Example 1:
Input: root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 1
Output: 3
Explanation: The LCA of nodes 5 and 1 is 3.

Example 2:
Input: root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 4
Output: 5
Explanation: The LCA of nodes 5 and 4 is 5, since a node can be a descendant of itself according to the LCA definition.

Example 3:
Input: root = [1,2], p = 1, q = 2
Output: 1
*/
#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
bool exists(Node* root , Node* target){
    if(root == NULL) return false;
    if(root == target) return true;
    return exists(root->left,target) || exists(root->right,target);
}
Node* lowestCommonAncestor(Node* root, Node* p, Node* q) {
    if(root == p || root == q) return root;
    else if(exists(root->left,p) && exists(root->right,q)) return root;
    else if(exists(root->right,p) && exists(root->left,q)) return root;
    else if(exists(root->left,p) && exists(root->left,q)) return lowestCommonAncestor(root->left,p,q);
    else return lowestCommonAncestor(root->right,p,q);
}
/*
$       WE CAN WRITE IN THIS WAY ALSO
Node* lowestCommonAncestor(Node* root, Node* p, Node* q) {
    if(exists(root->left,p) && exists(root->left,q)) return lowestCommonAncestor(root->left,p,q);
    else if(exists(root->right,p) && exists(root->right,q)) return lowestCommonAncestor(root->right,p,q);
    else return root;
}
*/

int main(){
    // Nodes
    Node* n3 = new Node(3);
    Node* n5 = new Node(5);
    Node* n1 = new Node(1);
    Node* n6 = new Node(6);
    Node* n2 = new Node(2);
    Node* n0 = new Node(0);
    Node* n8 = new Node(8);
    Node* n7 = new Node(7);
    Node* n4 = new Node(4);
    // Build tree
    /*
            3
          /   \
         5     1
        / \   / \
       6   2 0   8
          / \
         7   4
    */
    n3->left = n5;
    n3->right = n1;

    n5->left = n6;
    n5->right = n2;

    n1->left = n0;
    n1->right = n8;

    n2->left = n7;
    n2->right = n4;

    // Given p and q
    Node* p = n5;  // 5
    Node* q = n1;  // 1

    Node* lca = lowestCommonAncestor(n3, p, q);

    if(lca) cout<<"LCA of "<<p->val<<" and "<<q->val<<" is: "<<lca->val<<endl;
    else cout<<"LCA not found"<<endl;

    return 0;
}

