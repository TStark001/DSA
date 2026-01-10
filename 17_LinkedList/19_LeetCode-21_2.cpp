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
!                                       [Method-2]
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
Node *mergeTwoLists(Node *list1, Node *list2)
{
    Node *c = new Node(-1);
    Node *temp = c;
    while (list1 != NULL and list2 != NULL)
    {
        if (list1->val <= list2->val)
        {
            temp->next = list1;
            list1 = list1->next;
            temp = temp->next;
        }
        else
        {
            temp->next = list2;
            list2 = list2->next;
            temp = temp->next;
        }
    }
    if (list1 == NULL)
        temp->next = list2;
    else
        temp->next = list1;
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
    Node *head = mergeTwoLists(head1, head2);
    cout << "Merge Sorted List :- ";
    display(head);
}