/*
*                       Prefix sum in 2D Arrays
        Given a matrix 'a' of dimension nxm and 2 coordinates (l1,r1) and (l2,r2).
        Return the sum of the rectangle from (l1,r1) to (l2,r2).
!        METHOD-2 :- Pre-Calculating the horizontal sum of each row in the matrix.
*/
#include <iostream>
#include <vector>
using namespace std;

int rectangleSum(vector<vector<int>> &matrix, int l1, int r1, int l2, int r2)
{
    int sum = 0;
    // prefix sum array row-wise
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 1; j < matrix[0].size(); j++)
        {
            matrix[i][j] += matrix[i][j - 1];
        }
    }

    // printing prefix sum array row-wise
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = l1; i <= l2; i++)
    {
        if (r1 != 0)
        {
            sum += matrix[i][r2] - matrix[i][r1 - 1];
        }
        else
        {
            // matrix[i][r1-1] = 0;
            sum += matrix[i][r2];
        }
    }
    return sum;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int sum = rectangleSum(matrix, l1, r1, l2, r2);
    cout << "Sum = " << sum;
    return 0;
}