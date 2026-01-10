/*
!                               Pattern:-Two pointer
                    Sort an array consisting of only 0's and 1's.
todo                            (SECOND METHOD)
*/
#include <iostream>
#include <vector>
using namespace std;

// declaration of function.
void sortZeroesandOnes(vector<int> &v)
{
    int left_ptr = 0;
    int right_ptr = v.size() - 1;
    while (left_ptr < right_ptr)
    {
        if (v[left_ptr] == 1 && v[right_ptr] == 0)
        {
            v[left_ptr++] = 0;
            v[right_ptr--] = 1;
        }
        if (v[left_ptr] == 0)
        {
            v[left_ptr++];
        }
        if (v[right_ptr] == 1)
        {
            v[right_ptr--];
        }
    }
}

int main()
{
    int n;
    cout << "Enter Size of Vector = ";
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    // calling the function
    sortZeroesandOnes(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}