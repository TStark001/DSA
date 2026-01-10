/*
#   LeetCode-148 :- Sort List
    Given the head of a linked list, return the list after sorting it in ascending order.

    Example 1:
    Input: head = [4,2,1,3]
    Output: [1,2,3,4]

    Example 2:
    Input: head = [-1,5,3,4,0]
    Output: [-1,0,3,4,5]

    Example 3:
    Input: head = []
    Output: []
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
Node *sortList(Node *head)
{
    // base case
    if (head == NULL or head->next == NULL)
        return head;
    // to find the left middle
    Node *slow = head;
    Node *fast = head;
    while (fast->next != NULL and fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    // now slow is at left middle
    Node *a = head;
    Node *b = slow->next;
    slow->next = NULL;
    a = sortList(a);
    b = sortList(b);
    Node *c = merge(a, b);
    return c;
}

int main()
{
    LinkedList list;
    int n, val;
    cout << "Enter number of Nodes :- ";
    cin >> n;

    cout << "Enter Value :- ";
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        list.insertAtTail(val);
    }
    cout << "List :- ";
    list.display();

    // sort and update head
    list.head = sortList(list.head);

    cout << "Sorted List :- ";
    list.display();

    return 0;
}