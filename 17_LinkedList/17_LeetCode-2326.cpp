/*
#   LeetCode-2326 :- Spiral Matrix IV
    You are given two integers m and n, which represent the dimensions of a matrix.

    You are also given the head of a linked list of integers.

    Generate an m x n matrix that contains the integers in the linked list presented in spiral order (clockwise), starting from the top-left of the matrix. If there are remaining empty spaces, fill them with -1.

    Return the generated matrix.

    Example 1:
    Input: m = 3, n = 5, head = [3,0,2,6,8,1,7,9,4,2,5,5,0]
    Output: [[3,0,2,6,8],[5,0,-1,-1,1],[5,2,4,9,7]]
    Explanation: The diagram above shows how the values are printed in the matrix.
    Note that the remaining spaces in the matrix are filled with -1.

    Example 2:
    Input: m = 1, n = 4, head = [0,1,2]
    Output: [[0,1,2,-1]]
    Explanation: The diagram above shows how the values are printed from left to right in the matrix.
    The last space in the matrix is set to -1.
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
vector<vector<int>> spiralMatrix(int m, int n, Node *head)
{
    vector<vector<int>> arr(m, vector<int>(n, -1));
    int minr = 0;
    int maxr = m - 1;
    int minc = 0;
    int maxc = n - 1;
    Node *temp = head;
    while (minr <= maxr and minc <= maxc)
    {
        // right
        for (int j = minc; j <= maxc; j++)
        {
            if (temp == NULL)
                return arr;
            arr[minr][j] = temp->val;
            temp = temp->next;
        }
        minr++;
        if (minr > maxr or minc > maxc)
            break;
        // down
        for (int i = minr; i <= maxr; i++)
        {
            if (temp == NULL)
                return arr;
            arr[i][maxc] = temp->val;
            temp = temp->next;
        }
        maxc--;
        if (minr > maxr or minc > maxc)
            break;
        // left
        for (int j = maxc; j >= minc; j--)
        {
            if (temp == NULL)
                return arr;
            arr[maxr][j] = temp->val;
            temp = temp->next;
        }
        maxr--;
        if (minr > maxr or minc > maxc)
            break;
        // top;
        for (int i = maxr; i >= minr; i--)
        {
            if (temp == NULL)
                return arr;
            arr[i][minc] = temp->val;
            temp = temp->next;
        }
        minc++;
        if (minr > maxr or minc > maxc)
            break;
    }
    return arr;
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
    int x = 3, y = 5;
    Node *a = new Node(3);
    Node *b = new Node(0);
    Node *c = new Node(2);
    Node *d = new Node(6);
    Node *e = new Node(8);
    Node *f = new Node(1);
    Node *g = new Node(7);
    Node *h = new Node(9);
    Node *i = new Node(4);
    Node *j = new Node(2);
    Node *k = new Node(5);
    Node *l = new Node(5);
    Node *m = new Node(0);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = h;
    h->next = i;
    i->next = j;
    j->next = k;
    k->next = l;
    l->next = m;
    Node *head = a;
    cout << "List :- ";
    display(head);
    // Correct function call
    vector<vector<int>> result = spiralMatrix(x, y, head);
    cout << "Spiral Matrix :- " << endl;
    // Print spiral matrix
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}