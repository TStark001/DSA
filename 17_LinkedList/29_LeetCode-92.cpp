/*
#   LeetCode-92 :- Reverse Linked List 2
    Given the head of a singly linked list and two integers left and right where left <= right, reverse the nodes of the list from position left to position right, and return the reversed list.

    Example 1:
    Input: head = [1,2,3,4,5], left = 2, right = 4
    Output: [1,4,3,2,5]

    Example 2:
    Input: head = [5], left = 1, right = 1
    Output: [5]
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
class LinkedList
{
public:
    Node *head;
    Node *tail;
    int size;
    LinkedList()
    {
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
Node *reverseList(Node *head)
{
    if (head == NULL or head->next == NULL)
        return head;
    Node *newHead = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}
Node *reverseBetween(Node *head, int left, int right)
{
    if (left == right)
        return head;
    Node *a = NULL;
    Node *b = NULL;
    Node *c = NULL;
    Node *d = NULL;
    Node *temp = head;
    int n = 1;
    while (temp)
    {
        if (n == left - 1)
            a = temp;
        if (n == left)
            b = temp;
        if (n == right)
            c = temp;
        if (n == right + 1)
            d = temp;
        temp = temp->next;
        n++;
    }
    if (a != NULL)
        a->next = NULL;
    c->next = NULL;
    c = reverseList(b);
    if (a != NULL)
        a->next = c;
    b->next = d;
    if (a != NULL)
        return head;
    return c;
}

int main()
{
    LinkedList list;
    int n, val;
    cout << "Enter number of Nodes :- ";
    cin >> n;

    cout << "Enter value :- ";
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        list.insertAtTail(val);
    }

    int left, right;
    cout << "Enter left :- ";
    cin >> left;
    cout << "Enter right :- ";
    cin >> right;

    cout << "List :- ";
    list.display();

    list.head = reverseBetween(list.head, left, right);
    cout << "Reverse List :- ";
    list.display();
    return 0;
}