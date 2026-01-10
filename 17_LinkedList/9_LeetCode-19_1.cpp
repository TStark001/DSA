/*
#   LeetCode-19 :- Remove Nth node from the End of the list.
    Given the head of a linked list, remove the nth node from the end of the list and return its head.

    Example 1:
    Input: head = [1,2,3,4,5], n = 2
    Output: [1,2,3,5]

    Example 2:
    Input: head = [1], n = 1
    Output: []

    Example 3:
    Input: head = [1,2], n = 1
    Output: [1]
!                               (Method-1)
*/
#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
Node* removeNthfromEnd(Node* head , int n){
    int len = 0;
    Node* temp = head;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    if(n==len){
        head = head->next;
        return head;
    }
    // nth from end = (len-n+1)th from start
    int m = len - n + 1;
    int idx = m-1; // the idx node to deleted
    temp = head;
    for(int i = 0 ; i<idx-1 ; i++){
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return head;
}
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    Node* head = a;
    display(head);
    head = removeNthfromEnd(a,3);
    display(head);
}