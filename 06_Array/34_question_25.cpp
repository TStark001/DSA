/*
        Given a boolean 2D array, where each row is sorted.Find the
        row with maximum number of 1s.
!                                   (METHOD-1)
*/
#include <iostream>
#include <vector>
using namespace std;

int maximumOnesRow(vector<vector<int>> &v)
{
    int maxOnes = INT16_MIN;
    int maxOnesRow = -1;
    int column = v[0].size();
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            if (v[i][j] == 1)
            {
                int numberofOnes = column - j;
                if (numberofOnes > maxOnes)
                {
                    maxOnes = numberofOnes;
                    maxOnesRow = i;
                }
                break;
            }
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

    int res = maximumOnesRow(vec);
    cout << res << endl;

    return 0;
}