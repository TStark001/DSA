// split and reverse second part of the linked list
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
pair<Node *, Node *> breakList(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    Node *prev = NULL;
    while (fast != NULL and fast->next != NULL)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    prev->next = NULL;
    Node *firstHalf = head;
    Node *secondHalf = reverseList(slow);
    return {firstHalf, secondHalf};
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
    auto halves = breakList(list.head);

    Node *first = halves.first;
    Node *second = halves.second;

    cout << "First Half: ";
    Node *t = first;
    while (t)
    {
        cout << t->val << " ";
        t = t->next;
    }
    cout << endl;

    cout << "Second Half: ";
    t = second;
    while (t)
    {
        cout << t->val << " ";
        t = t->next;
    }
    cout << endl;

    return 0;
}