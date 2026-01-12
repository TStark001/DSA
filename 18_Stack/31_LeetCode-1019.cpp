/*
#   LeetCode-1019 :- Next Greater Node in Linked List.
    You are given the head of a linked list with n nodes.

    For each node in the list, find the value of the next greater node. That is, for each node, find the value of the first node that is next to it and has a strictly larger value than it.

    Return an integer array answer where answer[i] is the value of the next greater node of the ith node (1-indexed). If the ith node does not have a next greater node, set answer[i] = 0.

    Example 1:
    Input: head = [2,1,5]
    Output: [5,5,0]

    Example 2:
    Input: head = [2,7,4,3,5]
    Output: [7,0,5,5,0]
*/
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class Node{
public:
    int val;
    Node *next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class LinkedList{
public:
    Node *head;
    Node *tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val){
        Node *temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void display(){
        Node *temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
vector<int> nextLargerNode(Node *head){
    Node *temp = head;
    vector<int> nums;
    while(temp!=NULL){
        nums.push_back(temp->val);
        temp = temp->next;
    }
    int n = nums.size();
    vector<int> ans(n);
    stack<int> st;
    ans[n-1] = 0;
    st.push(nums[n-1]);
    for(int i = n-2 ; i>=0 ; i--){
        while(st.size()>0 and st.top()<=nums[i]){
            st.pop();
        }
        if(st.size() == 0) ans[i] = 0;
        else ans[i] = st.top();
        st.push(nums[i]);
    }
    return ans;
}

int main(){
    LinkedList ll;
    ll.insertAtTail(2);
    ll.insertAtTail(7);
    ll.insertAtTail(4);
    ll.insertAtTail(3);
    ll.insertAtTail(5);
    ll.display();
    Node *temp = ll.head;
    vector<int> ans = nextLargerNode(temp);
    for(int x : ans){
        cout<<x<<" ";
    }
}