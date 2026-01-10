/*
#   LeetCode-725 :- Split Linked List in Parts
    Given the head of a singly linked list and an integer k, split the linked list into k consecutive linked list parts.

    The length of each part should be as equal as possible: no two parts should have a size differing by more than one. This may lead to some parts being null.

    The parts should be in the order of occurrence in the input list, and parts occurring earlier should always have a size greater than or equal to parts occurring later.

    Return an array of the k parts.

    Example 1:
    Input: head = [1,2,3], k = 5
    Output: [[1],[2],[3],[],[]]
    Explanation:
    The first element output[0] has output[0].val = 1, output[0].next = null.
    The last element output[4] is null, but its string representation as a Node is [].

    Example 2:
    Input: head = [1,2,3,4,5,6,7,8,9,10], k = 3
    Output: [[1,2,3,4],[5,6,7],[8,9,10]]
    Explanation:
    The input has been split into consecutive parts with size difference at most 1, and earlier parts are a larger size than the later parts.
*/
#include <iostream>
#include <vector>
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
vector<Node *> splitListToParts(Node *head, int k)
{
    int n = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        n++;
    }
    // breaking teh list into k list
    vector<Node *> ans;
    int size = n / k;
    int rem = n % k;
    temp = head;
    while (temp != NULL)
    {
        Node *c = new Node(-1);
        Node *tempC = c;
        int s = size;
        if (rem > 0)
            s++;
        rem--;
        for (int i = 1; i <= s; i++)
        {
            tempC->next = temp;
            temp = temp->next;
            tempC = tempC->next;
        }
        tempC->next = NULL;
        ans.push_back(c->next);
    }
    if (ans.size() < k)
    {
        int extra = k - ans.size();
        for (int i = 1; i <= extra; i++)
        {
            ans.push_back(NULL);
        }
    }
    return ans;
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

    int k;
    cout << "Enter k for consecutive linked list parts :- ";
    cin >> k;

    cout << "Original List :- ";
    list.display();

    vector<Node *> result = splitListToParts(list.head, k);

    cout << "\nSplit Parts:\n";
    for (int i = 0; i < result.size(); i++)
    {
        cout << "Part " << i + 1 << ": ";
        Node *temp = result[i];
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    return 0;
}