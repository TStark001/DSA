/*
#   LeetCode-239 :- Sliding Window Maximum
    You are given an array of integers nums, there is a sliding window of size k which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position.

    Return the max sliding window.

    Example 1:
    Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
    Output: [3,3,5,5,6,7]
    Explanation:
    Window position                Max
    ---------------               -----
    [1  3  -1] -3  5  3  6  7       3
    1 [3  -1  -3] 5  3  6  7       3
    1  3 [-1  -3  5] 3  6  7       5
    1  3  -1 [-3  5  3] 6  7       5
    1  3  -1  -3 [5  3  6] 7       6
    1  3  -1  -3  5 [3  6  7]      7

    Example 2:
    Input: nums = [1], k = 1
    Output: [1]
*/
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> maxSlidingWindow(vector<int> &arr, int k)
{
    if (k == 1)
        return arr;
    int n = arr.size();
    int ngi[n];
    stack<int> st;
    ngi[n - 1] = n;
    st.push(n - 1);
    for (int i = n - 2; i >= 0; i--)
    {
        while (st.size() > 0 and arr[st.top()] <= arr[i])
        {
            st.pop();
        }
        if (st.size() == 0)
            ngi[i] = n;
        else
            ngi[i] = st.top();
        st.push(i);
    }
    vector<int> ans;
    int j = 0;
    for (int i = 0; i < n - k + 1; i++)
    {
        if (j < i)
            j = i;
        int mx = arr[j];
        while (j < i + k)
        {
            mx = arr[j];
            if (ngi[j] >= i + k)
                break;
            j = ngi[j];
        }
        ans.push_back(mx);
    }
    return ans;
}

int main()
{
    vector<int> nums = {1,3,-1,-3,5,3,6,7};
    int k = 3;
    vector<int> result = maxSlidingWindow(nums,k);
    for(int x : result){
        cout<<x<<" ";
    }
    return 0;
}