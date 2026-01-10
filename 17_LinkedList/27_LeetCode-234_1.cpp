/*
#   LeetCode-234 :- Palindrome Linked List
    Given the head of a singly linked list, return true if it is a palindrome or false otherwise.

    Example 1:
    Input: head = [1,2,2,1]
    Output: true

    Example 2:
    Input: head = [1,2]
    Output: false
!                   Method-1
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
    Node *prev = NULL, *curr = head, *Next = head;
    while (curr != NULL)
    {
        Next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = Next;
    }
    return prev;
}
bool isPalindrome(Node* head){
    Node* c = new Node(10);
    // deep copy of head
    Node* temp = head , *tempC = c;
    while(temp){ // TC = O(n)   ;   SC = O(n)
        Node *node = new Node(temp->val);
        tempC->next = node;
        temp = temp->next;
        tempC = tempC->next;
    }
    c = c->next;
    c = reverseList(c); // TC = O(n)
    Node *a = head , *b = c;
    while(a!=NULL){ // TC = O(n)
        if(a->val != b->val) return false;
        a = a->next;
        b = b->next;
    }
    return true;
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

    if(isPalindrome(list.head)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}