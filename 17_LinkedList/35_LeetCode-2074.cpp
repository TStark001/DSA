/*
#   LeetCode-2074 :- Reverse Nodes in Even length Groups
    You are given the head of a linked list.

    The nodes in the linked list are sequentially assigned to non-empty groups whose lengths form the sequence of the natural numbers (1, 2, 3, 4, ...). The length of a group is the number of nodes assigned to it. In other words,

    The 1st node is assigned to the first group.
    The 2nd and the 3rd nodes are assigned to the second group.
    The 4th, 5th, and 6th nodes are assigned to the third group, and so on.
    Note that the length of the last group may be less than or equal to 1 + the length of the second to last group.

    Reverse the nodes in each group with an even length, and return the head of the modified linked list.

    Example 1:
    Input: head = [5,2,6,3,9,1,7,3,8,4]
    Output: [5,6,2,3,9,1,4,8,3,7]
    Explanation:
    - The length of the first group is 1, which is odd, hence no reversal occurs.
    - The length of the second group is 2, which is even, hence the nodes are reversed.
    - The length of the third group is 3, which is odd, hence no reversal occurs.
    - The length of the last group is 4, which is even, hence the nodes are reversed.

    Example 2:
    Input: head = [1,1,0,6]
    Output: [1,0,1,6]
    Explanation:
    - The length of the first group is 1. No reversal occurs.
    - The length of the second group is 2. The nodes are reversed.
    - The length of the last group is 1. No reversal occurs.

    Example 3:
    Input: head = [1,1,0,6,5]
    Output: [1,0,1,5,6]
    Explanation:
    - The length of the first group is 1. No reversal occurs.
    - The length of the second group is 2. The nodes are reversed.
    - The length of the last group is 2. The nodes are reversed.
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
Node *reverseEvenLengthGroups(Node *head)
{
    Node *temp = head;
    int gap = 1;
    while (temp and temp->next)
    {
        int remLen = 0;
        Node *t = temp->next;
        for (int i = 1; i <= gap + 1 and t != NULL; i++)
        {
            t = t->next;
            remLen++;
        }
        if (remLen < gap + 2)
            gap = remLen - 1;
        if (gap % 2 != 0)
            reverseBetween(temp, 2, 2 + gap);
        gap++;
        for (int i = 1; temp != NULL and i <= gap; i++)
        {
            temp = temp->next;
        }
    }
    return head;
}

int main()
{
    LinkedList list;
    int n, val;
    cout << "Enter number of Nodes :- ";
    cin >> n;

    cout << "Enter values :- ";
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        list.insertAtTail(val);
    }

    cout << "Original List :- ";
    list.display();

    cout << "Reverse Even Length Group List :- " << endl;
    list.head = reverseEvenLengthGroups(list.head);
    list.display();
    return 0;
}