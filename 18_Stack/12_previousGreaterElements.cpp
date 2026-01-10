// Previous Greater Element
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {3,1,2,7,4,6,2,3};
    int n = nums.size();
    for(int i = 0 ; i<n ; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    // using stack : pop , ans , push
    stack<int> st;
    vector<int> ans(n);
    ans[0] = -1;
    st.push(nums[0]);
    for(int i = 1 ; i<n ; i++){
        // pop all the elements smaller than nums[i]
        while(st.size()>0 and st.top()<=nums[i]){
            st.pop();
        }
        // mark the ans in ans vector
        if(st.size() == 0) ans[i] = -1;
        else ans[i] = st.top();

        // push the nums[i]
        st.push(nums[i]);
    } 
    for(int i = 0 ; i<n ; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
//!             TC = O(n)  ;    SC = O(n)
}