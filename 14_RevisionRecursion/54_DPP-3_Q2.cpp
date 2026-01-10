/*
    Print all the increasing sequence of length k from first n natural number.

    Input :- n = 4 , k = 2  [we need sequence of length 2 , strictly increasing]
    Output :- [1,2] [1,3] [1,4] [2,3] [2,4] [3,4]

    Input :- n = 5 , k = 3
    Output :- [1,2,3] [1,2,4] [1,2,5] [1,3,4] [1,3,5] [1,4,5] [2,3,4] [2,3,5] [2,4,5] [3,4,5]
*/
#include <iostream>
#include <vector>
using namespace std;

void generate(int start, int n, int k, vector<int> &ans)
{
    if (ans.size() == k)
    {
        for (int i = 0; i < k; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int i = start; i <= n; i++)
    {
        ans.push_back(i);
        generate(i + 1, n, k, ans);
        ans.pop_back();
    }
}

int main()
{
    int n = 5, k = 3;
    vector<int> ans;
    generate(1, n, k, ans);
}