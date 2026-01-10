/*
*                                   Pattern :- Two Pointer
            Given an array 'a' sorted in non-decreasing order,return an array
            of squares of each number sorted in non-decreasing order.
!           abs() :- This is absolute function.It is in-build function help us to give mod of negative
!                    interger(|-2| = 2)
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortSquaredArray(vector<int> &v)
{
    vector<int> ans;

    int left_ptr = 0;
    int right_ptr = v.size() - 1;
    while (left_ptr <= right_ptr)
    {
        if (abs(v[left_ptr]) < abs(v[right_ptr]))
        {
            ans.push_back(v[right_ptr] * v[right_ptr]);
            right_ptr--;
        }
        else
        {
            ans.push_back(v[left_ptr] * v[left_ptr]);
            left_ptr++;
        }
    }
    reverse(ans.begin(), ans.end()); // arrange the array in increasing order
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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

    sortSquaredArray(v);

    return 0;
}