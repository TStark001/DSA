// Remove all 1's from array
#include<iostream>
#include<vector>
using namespace std;

void removeOnes(vector<int> &ans , vector<int> &v , int idx){
    if(idx==v.size()){
        ans.push_back(v[idx]);
        return;
    }
    int s = v[idx];
    if(s==1) removeOnes(ans,v,idx+1);
    else removeOnes(ans,v,idx+1);
}

int main(){
    vector<int> v = {1,2,3,1,5,6,1,0};
    vector<int> ans;
    removeOnes(ans,v,0);
    for(int ele : ans){
        cout<<ele<<" ";
    }
    return 0;
}
// ! NOT WORKING?