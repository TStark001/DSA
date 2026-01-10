/*
# LeetCode-78 :- Subsets
    Given an integer array nums of unique elements, return all possible subsets (the power set).
    The solution set must not contain duplicate subsets. Return the solution in any order.

    Example 1:
    Input: nums = [1,2,3]
    Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

    Example 2:
    Input: nums = [0]
    Output: [[],[0]]

    Constraints:
    1 <= nums.length <= 10
    -10 <= nums[i] <= 10
    All the numbers of nums are unique.
*/
#include <iostream>
#include <vector>
using namespace std;

void printsubset(int arr[], int n, int idx, vector<int> ans)
{
    if (idx == n)
    {
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
        return;
    }
    printsubset(arr, n, idx + 1, ans);
    ans.push_back(arr[idx]);
    printsubset(arr, n, idx + 1, ans);
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v;
    printsubset(arr, n, 0, v);
    return 0;
}