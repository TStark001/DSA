/*
#   LeetCode-23 :- Merge K sorted Lists
    You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.

    Merge all the linked-lists into one sorted linked-list and return it.

    Example 1:
    Input: lists = [[1,4,5],[1,3,4],[2,6]]
    Output: [1,1,2,3,4,4,5,6]
    Explanation: The linked-lists are:
    [
    1->4->5,
    1->3->4,
    2->6
    ]
    merging them into one sorted linked list:
    1->1->2->3->4->4->5->6

    Example 2:
    Input: lists = []
    Output: []

    Example 3:
    Input: lists = [[]]
    Output: []
!                           [Method-2]
*/
#include <iostream>
#include <vector>
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
Node *merge(Node *list1, Node *list2)
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
Node *mergeKLists(vector<Node *> &arr)
{
    if (arr.size() == 0)
        return NULL;
    while (arr.size() > 1)
    {
        Node *a = arr[0];
        arr.erase(arr.begin());
        Node *b = arr[0];
        arr.erase(arr.begin());
        Node *c = merge(a, b);
        arr.push_back(c);
    }
    return arr[0];
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
    Node *a = new Node(1);
    Node *b = new Node(4);
    Node *c = new Node(5);
    a->next = b;
    b->next = c;
    Node *head1 = a;
    cout << "List1 :- ";
    display(head1);
    Node *d = new Node(1);
    Node *e = new Node(3);
    Node *f = new Node(4);
    d->next = e;
    e->next = f;
    Node *head2 = d;
    cout << "List2 :- ";
    display(head2);
    Node *g = new Node(2);
    Node *h = new Node(6);
    g->next = h;
    Node *head3 = g;
    cout << "List3 :- ";
    display(head3);
    vector<Node *> arr;
    arr.push_back(a);
    arr.push_back(d);
    arr.push_back(g);
    // Merge K sorted lists
    Node *head = mergeKLists(arr);

    // Display result
    cout << "Merge Sorted List :- ";
    display(head);
}