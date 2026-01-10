/*
#   LeetCode-39 :- Combination Sum
    Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

    The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the frequency of at least one of the chosen numbers is different.

    The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input.

    Example 1:
    Input: candidates = [2,3,6,7], target = 7
    Output: [[2,2,3],[7]]
    Explanation:
    2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
    7 is a candidate, and 7 = 7.
    These are the only two combinations.

    Example 2:
    Input: candidates = [2,3,5], target = 8
    Output: [[2,2,2,2],[2,3,3],[3,5]]

    Example 3:
    Input: candidates = [2], target = 1
    Output: []
!                   (Method-2)
*/
#include <iostream>
#include <vector>
using namespace std;

void combination(vector<vector<int>> &ans, vector<int> v, vector<int> &candidates, int target, int idx)
{
    if (target == 0)
    {
        ans.push_back(v);
        return;
    }
    if (target < 0)
        return;
    for (int i = idx; i < candidates.size(); i++)
    {
        v.push_back(candidates[i]);
        combination(ans, v, candidates, target - candidates[i], i);
        v.pop_back();
    }
}
vector<vector<int>> combination(vector<int> &candidates, int target)
{
    vector<vector<int>> ans;
    vector<int> v;
    combination(ans, v, candidates, target, 0);
    return ans;
}

int main()
{
    int arr[] = {2, 3, 5};
    int target = 8;
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> candidates(arr, arr + n);
    vector<vector<int>> result = combination(candidates, target);
    for (auto &vec : result)
    {
        cout << "[ ";
        for (int num : vec)
            cout << num << " ";
        cout << "]\n";
    }
}