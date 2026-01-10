/*
    Given a square matrix , turn it by 90 degree in clock wise
    direction without using any extra spaces.
            1 2 3      7 4 1
            4 5 6 ---> 8 5 2
            7 8 9      9 6 3
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateArray(vector<vector<int>> &v)
{
    int n = v.size();
    // transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(v[i][j], v[j][i]);
        }
    }

    // reverse every row
    for (int i = 0; i < n; i++)
    {
        reverse(v[i].begin(), v[i].end());
    }

    return;
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> vec(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> vec[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    rotateArray(vec);

    cout << "After Roatating Matrix" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}