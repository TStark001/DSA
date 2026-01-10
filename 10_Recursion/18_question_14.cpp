/*
!   Given an array of integers , print sums of all subsets in it.Output sum can be printed in any order.
    Input :- arr[] = {2,3}
    Output :- 0 2 3 5

    Input :- arr[] = {2,4,6}
    Output :- 0 2 4 5 6 7 9 11
*   How many total subset exist for a set of length n ?
    Ans:- 2^n(2 raised to power n)
*/
#include <iostream>
#include <vector>
using namespace std;

void f(int *arr, int n, int i, int sum, vector<int> &result)
{
    // base case
    if (i == n)
    {
        result.push_back(sum);
        return;
    }
    f(arr, n, i + 1, sum + arr[i], result); // pick the ith element
    f(arr, n, i + 1, sum, result);          // do not pick the ith element
}

int main()
{
    int arr[] = {2, 3, 4};
    int n = 3;
    vector<int> result;
    f(arr, n, 0, 0, result);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}