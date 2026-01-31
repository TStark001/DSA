/*
#   LeetCode-102 :- Binary Tree Level Order Traversal
    Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).

    Example 1:
    Input: root = [3,9,20,null,null,15,7]
    Output: [[3],[9,20],[15,7]]

    Example 2:
    Input: root = [1]
    Output: [[1]]

    Example 3:
    Input: root = []
    Output: []
!                   METHOD-2(Effective)
*/
#include<iostream>
#include<vector>
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
void LevelOrder(Node* root,vector<vector<int>>& ans,int level){
    if(root == NULL) return;
    ans[level].push_back(root->val);
    LevelOrder(root->left,ans,level+1);
    LevelOrder(root->right,ans,level+1);
}
vector<vector<int>> levelOrder(Node* root) {
    int n = level(root);
    vector<vector<int>> ans;
    for(int i = 1 ; i<=n ; i++){
        vector<int> v;
        ans.push_back(v);
    }
    LevelOrder(root,ans,0);
    return ans;
}

int main(){
    Node* a = new Node(3);
    Node* b = new Node(9);
    Node* c = new Node(20);
    Node* d = new Node(15);
    Node* e = new Node(7);
    
    // Creating connection
    a->left = b;
    a->right = c;
    c->left = d;
    c->right = e;
    vector<vector<int>> result = levelOrder(a);
    for(auto level : result){
        for(int val : level){
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}