/*
!                                   PATTERN :- PREFIX SUM
                    Given an integer array 'a', return the prefix sum/running sum
                    in the same array without creating a new array.
todo                Ex :- [5,4,1,2,3] (enter by user)
todo                      [5,9,10,12,15] (ya output aana chaiya)
*/
#include <iostream>
#include <vector>
using namespace std;

void runningSum(vector<int> &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        v[i] = v[i - 1] + v[i];
    }
    return;
}

int main()
{
    int n;
    cout << "Enter the size of Vector = ";
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    runningSum(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}