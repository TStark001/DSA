/*
#   LeetCode-206 :- Reverse Linked List
    Given the head of a singly linked list, reverse the list, and return the reversed list.

    Example 1:
    Input: head = [1,2,3,4,5]
    Output: [5,4,3,2,1]

    Example 2:
    Input: head = [1,2]
    Output: [2,1]

    Example 3:
    Input: head = []
    Output: []
!                       {Method-1 :- iterative Solution}
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
    Node *head, *tail;
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
Node *getNodeAt(Node *head, int idx)
{
    Node *temp = head;
    for (int i = 0; i < idx; i++)
    {
        temp = temp->next;
    }
    return temp;
}
Node *reverseList(Node *head)
{
    int n = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        // cout << temp->val;
        temp = temp->next;
        n++;
    }
    int i = 0, j = n - 1;
    while (i < j)
    {
        Node *left = getNodeAt(head, i);
        Node *right = getNodeAt(head, j);
        int t = left->val;
        left->val = right->val;
        right->val = t;
        i++, j--;
    }
    /*  temp = head;
     while(temp!=NULL){
         cout<<temp->val<<" ";
         temp = temp->next;
     } */
    return head;
}

//$     TC = O(n^2)     ;       SC = O(1)
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
    cout << "List :- ";
    list.display();

    list.head = reverseList(list.head);
    cout << "Reverse List :- ";
    list.display();
}