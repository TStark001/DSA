/*
#   LeetCode-2487 :- Remove Nodes From Linked List
You are given the head of a linked list.
Remove every node which has a node with a greater value anywhere to the right side of it.
Return the head of the modified linked list.

Example 1:
Input: head = [5,2,13,3,8]
Output: [13,8]
Explanation: The nodes that should be removed are 5, 2 and 3.
- Node 13 is to the right of node 5.
- Node 13 is to the right of node 2.
- Node 8 is to the right of node 3.

Example 2:
Input: head = [1,1,1,1]
Output: [1,1,1,1]
Explanation: Every node has value 1, so no nodes are removed.  
$                               [METHOD-1 :- using linked list]
*/
#include<iostream>
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
    Node *head,*tail;
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
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
Node* reverse(Node* head){
    Node *prev = NULL , *curr = head , *Next = NULL; 
    while(curr!=NULL){ 
        Next = curr->next;
        curr->next = prev; 
        prev = curr; 
        curr = Next; 
    }
    return prev;
}

Node* removeNodes(Node* head) {
    // Step 1: reverse
    head = reverse(head);

    // Step 2: remove nodes smaller than max
    int mx = head->val;
    Node* curr = head;

    while(curr and curr->next){
        if(curr->next->val < mx){
            curr->next = curr->next->next;
        } 
        else{
            curr = curr->next;
            mx = curr->val;
        }
    }

    // Step 3: reverse back
    return reverse(head);
}


int main(){
    LinkedList ll;
    ll.insertAtTail(5);
    ll.insertAtTail(2);
    ll.insertAtTail(13);
    ll.insertAtTail(3);
    ll.insertAtTail(8);
    ll.display();
    ll.head = removeNodes(ll.head);
    ll.display();
}