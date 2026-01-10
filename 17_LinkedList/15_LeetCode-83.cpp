/*
#   LeetCode-83 :- Remove Duplicate from Sorted List
Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

Example 1:
Input: head = [1,1,2]
Output: [1,2]

Example 2:
Input: head = [1,1,2,3,3]
Output: [1,2,3]
*/
#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
Node *deleteDuplicates(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *a = head;
    Node *b = head->next;
    while (b != NULL)
    {
        while (b != NULL and b->val == a->val)
        {
            b = b->next;
        }
        a->next = b;
        a = b;
        if (b != NULL)
            b = b->next;
    }
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

int main()
{
    Node* a = new Node(1);
    Node* b = new Node(1);
    Node* c = new Node(2);
    Node* d = new Node(3);
    Node* e = new Node(3);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    Node* head = a;
    display(head);
    head = deleteDuplicates(head);
    display(head);
}