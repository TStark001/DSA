/*
#   LeetCode-143 :- Reorder List
    You are given the head of a singly linked-list. The list can be represented as:

    L0 → L1 → … → Ln - 1 → Ln
    Reorder the list to be on the following form:

    L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …
    You may not modify the values in the list's nodes. Only nodes themselves may be changed.

    Example 1:
    Input: head = [1,2,3,4]
    Output: [1,4,2,3]

    Example 2:
    Input: head = [1,2,3,4,5]
    Output: [1,5,2,4,3]
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
void reorderList(Node *head)
{
    Node *slow = head, *fast = head;
    while (fast->next != NULL and fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    // slow is at the left middle / middle
    Node *b = reverseList(slow->next);
    Node *a = head;
    slow->next = NULL; // for breaking the list

    // merge these two lists a and b alternatively
    Node *c = new Node(-1);
    Node *tempC = c, *tempA = a, *tempB = b;
    while (tempA != NULL and tempB != NULL)
    {
        tempC->next = tempA;
        tempA = tempA->next;
        tempC = tempC->next;
        tempC->next = tempB;
        tempB = tempB->next;
        tempC = tempC->next;
    }
    tempC->next = tempA;
    head = c->next;
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

    cout << "List :- ";
    list.display();

    reorderList(list.head);
    cout << "Reorder List :- ";
    list.display();
    return 0;
}