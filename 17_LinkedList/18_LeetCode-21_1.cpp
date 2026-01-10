/*
#   LeetCode-21 :- Merge 2 Sorted List
    You are given the heads of two sorted linked lists list1 and list2.

    Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

    Return the head of the merged linked list.

    Example 1:
    Input: list1 = [1,2,4], list2 = [1,3,4]
    Output: [1,1,2,3,4,4]

    Example 2:
    Input: list1 = [], list2 = []
    Output: []

    Example 3:
    Input: list1 = [], list2 = [0]
    Output: [0]
!                                   [Method-1]
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
Node *mergeTwoList(Node *a, Node *b)
{
    Node *tempA = a;
    Node *tempB = b;
    Node *c = new Node(-1);
    Node *tempC = c;
    while (tempA != NULL and tempB != NULL)
    {
        if (tempA->val <= tempB->val)
        {
            Node *t = new Node(tempA->val);
            tempC->next = t;
            tempC = t;
            tempA = tempA->next;
        }
        else
        {
            Node *t = new Node(tempB->val);
            tempC->next = t;
            tempC = t;
            tempB = tempB->next;
        }
    }
    if (tempA == NULL)
    {
        tempC->next = tempB;
    }
    else
    {
        tempC->next = tempA;
    }
    return c->next;
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
    int k = 2;
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(4);
    a->next = b;
    b->next = c;
    Node *d = new Node(1);
    Node *e = new Node(3);
    Node *f = new Node(4);
    d->next = e;
    e->next = f;
    cout << "List1 :- ";
    Node *head1 = a;
    display(head1);
    cout << "List2 :- ";
    Node *head2 = d;
    display(head2);
    Node *head = mergeTwoList(head1, head2);
    cout<<"Merge Sorted List :- ";
    display(head);
}