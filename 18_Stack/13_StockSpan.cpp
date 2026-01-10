// Stock Span
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {100, 80, 60, 81, 70, 60, 75, 85};
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    // using stack : pop , ans , push
    stack<int> st;
    vector<int> prevGreaIdx(n);
    prevGreaIdx[0] = 1;
    st.push(0);
    for (int i = 1; i < n; i++)
    {
        // pop all the elements smaller than nums[i]
        while (st.size() > 0 and nums[st.top()] <= nums[i])
        {
            st.pop();
        }
        // mark the ans in ans vector
        if (st.size() == 0)
            prevGreaIdx[i] = -1;
        else
            prevGreaIdx[i] = st.top();
        prevGreaIdx[i] = i - prevGreaIdx[i];
        // push the nums[i]
        st.push(i);
    }
    for (int i = 0; i < n; i++)
    {
        cout << prevGreaIdx[i] << " ";
    }
    cout << endl;
    //!             TC = O(n)  ;    SC = O(n)
}