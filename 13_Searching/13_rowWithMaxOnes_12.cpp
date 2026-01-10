/*
    Given a matrix having 0-1 only where each row is sorted in increasing order, find the row with the
    maximum number of 1’s.
    Input matrix : 0 1 1 1
                   0 0 1 1
                   1 1 1 1 // this row has maximum 1s
                   0 0 0 0
    Output: 2
*/
#include <iostream>
using namespace std;
int main()
{
    int arr[5][6] = {{0, 0, 0, 0, 1, 1}, {0, 0, 1, 1, 1, 1}, {0, 0, 0, 1, 1, 1}, {0, 1, 1, 1, 1, 1}, {0, 0, 0, 1, 1, 1}};
    int m = 5; // rows
    int n = 6; // column
    int row = -1;
    int maxOnes = -1;
    int x = 1;
    for (int i = 0; i < m; i++)
    {                      // bs on every row
        int countOnes = 0; // no of ones in ith row
        int lo = 0;
        int hi = n - 1;
        int firstIdx = -1;
        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (arr[i][mid == x])
            {
                if (mid == 0)
                {
                    firstIdx = mid;
                    break;
                }
                else if (arr[i][mid - 1] != x)
                {
                    firstIdx = mid;
                    break;
                }
                else
                {
                    hi = mid - 1;
                }
            }
            else if (arr[i][mid] < x)
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }
        if (firstIdx != -1)
        {
            countOnes = n - firstIdx;
        }
        if (maxOnes < countOnes)
        {
            maxOnes = countOnes;
            row = i;
        }
    }
    cout << "[" << row << "," << maxOnes << "]";
    return 0;
}
