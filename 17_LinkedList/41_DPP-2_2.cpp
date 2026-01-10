/*
#   LeetCode-1669 :- Merge in Between Linked Lists
    You are given two linked lists: list1 and list2 of sizes n and m respectively.

    Remove list1's nodes from the ath node to the bth node, and put list2 in their place.

    The blue edges and nodes in the following figure indicate the result:


    Build the result list and return its head.

    Example 1:
    Input: list1 = [10,1,13,6,9,5], a = 3, b = 4, list2 = [1000000,1000001,1000002]
    Output: [10,1,13,1000000,1000001,1000002,5]
    Explanation: We remove the nodes 3 and 4 and put the entire list2 in their place. The blue edges and nodes in the above figure indicate the result.

    Example 2:
    Input: list1 = [0,1,2,3,4,5,6], a = 2, b = 5, list2 = [1000000,1000001,1000002,1000003,1000004]
    Output: [0,1,1000000,1000001,1000002,1000003,1000004,6]
    Explanation: The blue edges and nodes in the above figure indicate the result.
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
Node *mergeInBetween(Node *list1, int a, int b, Node *list2)
{
    Node *s = NULL;
    Node *f = NULL;
    Node *tempA = list1;
    int n = 0;
    while (tempA != NULL)
    {
        if (n == a - 1)
            s = tempA;
        if (n == b + 1)
            f = tempA;
        tempA = tempA->next;
        n++;
    }
    // finding tail of list2
    Node *tail2 = list2;
    while (tail2->next != NULL)
    {
        tail2 = tail2->next;
    }
    // merge
    s->next = list2;
    tail2->next = f;
    return list1;
}

int main()
{
    LinkedList list1, list2;
    int n, m, val, left, right;

    cout << "Enter  nodes of List1 :- ";
    cin >> n;

    cout << "Enter values of List1 :- ";
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        list1.insertAtTail(val);
    }

    cout << "Enter  nodes of List2 :- ";
    cin >> m;

    cout << "Enter values of List2 :- ";
    for (int i = 0; i < m; i++)
    {
        cin >> val;
        list2.insertAtTail(val);
    }

    cout << "Enter a and b :- ";
    cin >> left >> right;
    cout << "List1 :- ";
    list1.display();
    cout << "List2 :- ";
    list2.display();

    list1.head = mergeInBetween(list1.head, left, right, list2.head);

    cout << "Merged List :- ";
    list1.display();
}
