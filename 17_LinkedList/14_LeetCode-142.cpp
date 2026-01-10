/*
#   LeetCode-142 :- Linked List Cycle 2
    Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.

    There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to (0-indexed). It is -1 if there is no cycle. Note that pos is not passed as a parameter.

    Do not modify the linked list.

    Example 1:
    Input: head = [3,2,0,-4], pos = 1
    Output: tail connects to node index 1
    Explanation: There is a cycle in the linked list, where tail connects to the second node.

    Example 2:
    Input: head = [1,2], pos = 0
    Output: tail connects to node index 0
    Explanation: There is a cycle in the linked list, where tail connects to the first node.

    Example 3:
    Input: head = [1], pos = -1
    Output: no cycle
    Explanation: There is no cycle in the linked list.
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
Node *detectCycle(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    bool flag = false;
    while (fast != NULL and fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            flag = true;
            break;
        }
    }
    if (flag == false)
        return NULL;
    else
    {
        Node *temp = head;
        while (temp != slow)
        {
            slow = slow->next;
            temp = temp->next;
        }
        return slow;
    }
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
    Node *a = new Node(3);
    Node *b = new Node(2);
    Node *c = new Node(0);
    Node *d = new Node(-4);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = b;
    Node *head = a;
    Node *cycleStart = detectCycle(head);

    if (cycleStart != NULL)
        cout << "Cycle starts at node with value: " << cycleStart->val << endl;
    else
        cout << "No cycle detected" << endl;
}
