/*
#   LeetCode-1721 :- Swapping Nodes in a Linked List
    You are given the head of a linked list, and an integer k.

    Return the head of the linked list after swapping the values of the kth node from the beginning and the kth node from the end (the list is 1-indexed).

    Example 1:
    Input: head = [1,2,3,4,5], k = 2
    Output: [1,4,3,2,5]

    Example 2:
    Input: head = [7,9,6,6,7,8,3,0,9,5], k = 5
    Output: [7,9,6,6,8,7,3,0,9,5]
!                   (Method-2)
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
Node *swapNodes(Node *head, int k)
{
    Node *slow = head;
    Node *fast = head;
    // moving fast to kth node from start
    for (int i = 1; i < k; i++)
    {
        fast = fast->next;
    }
    // save kth node from start
    Node *firstK = fast;
    // moving fast to end , slow follow
    while (fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next;
    }

    // slow is at the kth node from last
    Node *lastK = slow;
    swap(firstK->val, lastK->val);
    return head;
}

int main()
{
    LinkedList list1;
    int n, val, k;

    cout << "Enter  nodes of List :- ";
    cin >> n;

    cout << "Enter values of List :- ";
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        list1.insertAtTail(val);
    }
    cout << "Enter k = ";
    cin >> k;
    cout << "List1 :- ";
    list1.display();

    list1.head = swapNodes(list1.head, k);

    cout << "New List :- ";
    list1.display();
}