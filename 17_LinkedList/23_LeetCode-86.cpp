/*
#   LeetCode-86 :- Partition List
    Given the head of a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x.

    You should preserve the original relative order of the nodes in each of the two partitions.

    Example 1:
    Input: head = [1,4,3,2,5,2], x = 3
    Output: [1,2,2,4,3,5]

    Example 2:
    Input: head = [2,1], x = 2
    Output: [1,2]
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
Node *partition(Node *head, int x)
{
    Node *lo = new Node(-1);
    Node *hi = new Node(-2);
    Node *tempLo = lo;
    Node *tempHi = hi;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->val < x)
        {
            tempLo->next = temp;
            temp = temp->next;
            tempLo = tempLo->next;
        }
        else
        {
            tempHi->next = temp;
            temp = temp->next;
            tempHi = tempHi->next;
        }
    }
    tempLo->next = hi->next;
    tempHi->next = NULL;
    return lo->next;
}

int main()
{
    LinkedList list;
    int n, x, val;
    cout << "Enter number of Node :- ";
    cin >> n;
    cout << "Enter value :- ";
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        list.insertAtTail(val);
    }
    cout << "Partition Less than x :- ";
    cin >> x;
    cout << "List :- ";
    list.display();

    list.head = partition(list.head, x);
    cout << "After Partition :- ";
    list.display();
    return 0;
}