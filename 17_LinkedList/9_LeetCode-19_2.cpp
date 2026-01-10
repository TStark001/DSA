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
!                               (Method-2)
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
Node *removeNthFromEnd(Node *head, int n)
{
    Node *temp = new Node(0);
    temp->next = head;
    Node *slow = temp;
    Node *fast = temp;
    // traverse fast to (n+1) steps
    for (int i = 0; i < n + 1; i++)
    {
        fast = fast->next;
    }
    // move slow and fast at same pace
    while (fast != NULL)
    {
        slow = slow->next;
        fast = fast->next;
    }
    // now the slow is exactly at left of the nth node from the end
    slow->next = slow->next->next;
    return temp->next;
}
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    Node *head = a;
    display(head);
    head = removeNthFromEnd(head, 3);
    display(head);
}