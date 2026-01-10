/*
        Given a boolean 2D array, where each row is sorted.Find the
        row with maximum number of 1s.
!                                          (METHOD-2)
*/
#include <iostream>
#include <vector>
using namespace std;

int leftMostOneRow(vector<vector<int>> &v)
{

    int leftMostOne = -1;
    int maxOnesRow = -1;
    int j = v[0].size() - 1;

    // finding left most one 0th row
    while (j >= 0 && v[0][j] == 1)
    {
        leftMostOne = j;
        maxOnesRow = 0;
        j--;
    }

    // check in rest of rows if we can find a one left to the leftMostOne
    for (int i = 0; i < v.size(); i++)
    {
        while (j >= 0 && v[i][j] == 1)
        {
            leftMostOne = j;
            j--;
            maxOnesRow = i;
        }
    }
    return maxOnesRow;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> vec(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> vec[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    int res = leftMostOneRow(vec);
    cout << res << endl;

    return 0;
}