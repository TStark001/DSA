/*
#   LeetCode-430 :- Flatten a Multilevel Doubly Linked List
    You are given a doubly linked list, which contains nodes that have a next pointer, a previous pointer, and an additional child pointer. This child pointer may or may not point to a separate doubly linked list, also containing these special nodes. These child lists may have one or more children of their own, and so on, to produce a multilevel data structure as shown in the example below.

    Given the head of the first level of the list, flatten the list so that all the nodes appear in a single-level, doubly linked list. Let curr be a node with a child list. The nodes in the child list should appear after curr and before curr.next in the flattened list.

    Return the head of the flattened list. The nodes in the list must have all of their child pointers set to null.

    Example 1:
    Input: head = [1,2,3,4,5,6,null,null,null,7,8,9,10,null,null,11,12]
    Output: [1,2,3,7,8,11,12,9,10,4,5,6]
    Explanation: The multilevel linked list in the input is shown.
    After flattening the multilevel linked list it becomes:

    Example 2:
    Input: head = [1,2,null,3]
    Output: [1,3,2]
    Explanation: The multilevel linked list in the input is shown.
    After flattening the multilevel linked list it becomes:

    Example 3:
    Input: head = []
    Output: []
    Explanation: There could be empty list in the input.

    Constraints:
    The number of Nodes will not exceed 1000.
    1 <= Node.val <= 105


    How the multilevel linked list is represented in test cases:

    We use the multilevel linked list from Example 1 above:

    1---2---3---4---5---6--NULL
            |
            7---8---9---10--NULL
                |
                11--12--NULL
    The serialization of each level is as follows:

    [1,2,3,4,5,6,null]
    [7,8,9,10,null]
    [11,12,null]
    To serialize all levels together, we will add nulls in each level to signify no node connects to the upper node of the previous level. The serialization becomes:

    [1,    2,    3, 4, 5, 6, null]
                |
    [null, null, 7,    8, 9, 10, null]
                    |
    [            null, 11, 12, null]
    Merging the serialization of each level and removing trailing nulls we obtain:

    [1,2,3,4,5,6,null,null,null,7,8,9,10,null,null,11,12]
*/
#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node *child;
    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
        this->child = NULL;
    }
};
class DoublyLinkedList
{
public:
    Node *head;
    Node *tail;
    int size;
    DoublyLinkedList()
    {
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            temp->prev = tail; // extra
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
Node *flatten(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        Node *a = temp->next;
        if (temp->child)
        {
            Node *c = temp->child;
            temp->child = NULL;
            c = flatten(c);
            temp->next = c;
            c->prev = temp;
            while (c->next)
            {
                c = c->next;
            }
            c->next = a;
            if (a)
                a->prev = c;
        }
        temp = a;
    }
    return head;
}

int main()
{
    // Level 1
    Node *n1 = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);
    Node *n5 = new Node(5);
    Node *n6 = new Node(6);

    n1->next = n2;
    n2->prev = n1;

    n2->next = n3;
    n3->prev = n2;

    n3->next = n4;
    n4->prev = n3;

    n4->next = n5;
    n5->prev = n4;

    n5->next = n6;
    n6->prev = n5;

    // Level 2 (child of 3)
    Node *n7 = new Node(7);
    Node *n8 = new Node(8);
    Node *n9 = new Node(9);
    Node *n10 = new Node(10);

    n7->next = n8;
    n8->prev = n7;

    n8->next = n9;
    n9->prev = n8;

    n9->next = n10;
    n10->prev = n9;

    n3->child = n7;

    // Level 3 (child of 8)
    Node *n11 = new Node(11);
    Node *n12 = new Node(12);

    n11->next = n12;
    n12->prev = n11;

    n8->child = n11;

    // Flatten
    Node *flatHead = flatten(n1);

    // Print flattened list
    cout << "Flattened list:\n";
    Node *temp = flatHead;
    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}
