/*
#   LeetCode-84 :- Largest Rectangle in Histogram
    Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.

    Example 1:
    Input: heights = [2,1,5,6,2,3]
    Output: 10
    Explanation: The above is a histogram where width of each bar is 1.
    The largest rectangle is shown in the red area, which has an area = 10 units.

    Example 2:
    Input: heights = [2,4]
    Output: 4
*/
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int largestRectangleArea(vector<int> &arr)
{
    int n = arr.size();
    int nsi[n]; // nsi -> next smallest index
    stack<int> st;
    nsi[n - 1] = n;
    st.push(n - 1);
    for (int i = n - 2; i >= 0; i--)
    {
        while (st.size() > 0 and arr[st.top()] >= arr[i])
            st.pop();
        if (st.size() == 0)
            nsi[i] = n;
        else
            nsi[i] = st.top();
        st.push(i);
    }

    int psi[n]; // psi -> previous smallest index
    stack<int> gt;
    psi[0] = -1;
    gt.push(0);
    for (int i = 1; i < n; i++)
    {
        while (gt.size() > 0 and arr[gt.top()] >= arr[i])
            gt.pop();
        if (gt.size() == 0)
            psi[i] = -1;
        else
            psi[i] = gt.top();
        gt.push(i);
    }

    int maxArea = 0;
    for (int i = 0; i < n; i++)
    {
        int height = arr[i];
        int breadth = nsi[i] - psi[i] - 1;
        int area = height * breadth;
        maxArea = max(maxArea, area);
    }
    return maxArea;
}

int main()
{
    vector<int> nums = {2, 1, 5, 6, 2, 3};
    cout << largestRectangleArea(nums);
}