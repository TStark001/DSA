/*
*                               Pattern :- Two Pointer
    Given an array of integer 'a' move all the even integers at the beginning of the
    array followed by all the odd integers.The relative order of odd or even integer
    does not matter.Return any array that satisfies the condition.

!   swap() :- It is inbuilt function help to swap two variable

*/
#include <iostream>
#include <vector>
using namespace std;

void even_odd(vector<int> &v)
{
    int left_ptr = 0;
    int right_ptr = v.size() - 1;
    while (left_ptr < right_ptr)
    {
        if (v[left_ptr] % 2 == 1 && v[right_ptr] % 2 == 0)
        {
            swap(v[left_ptr], v[right_ptr]);
            left_ptr++;
            right_ptr--;
        }
        if (v[left_ptr] % 2 == 0)
        {
            left_ptr++;
        }
        if (v[right_ptr] % 2 == 1)
        {
            right_ptr--;
        }
    }
}

int main()
{
    int n;
    cout << "Enter the size of vector = ";
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    even_odd(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}