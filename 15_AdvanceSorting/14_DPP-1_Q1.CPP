// Given an array of integers , sort in descending order using merge sort algorithm.
#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &a,vector<int> &b,vector<int> &nums){
    int i = 0 , j = 0 , k = 0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            nums[k++] = a[i++];
        }
        else{
            nums[k++] = b[j++];
        }
    }
    if(i==a.size()){
        while(j<b.size()){
            nums[k++] = b[j++];
        }
    }
    if(j==b.size()){
        while(i<a.size()){
            nums[k++] = a[i++];
        }
    }

}
void mergeSort(vector<int> &nums){
    int n = nums.size();
    if(n==1) return;
    int n1 = n/2 , n2 = n-n/2;
    vector<int> a(n1) , b(n2);
    for(int i = 0 ; i<n1 ; i++){
        a[i] = nums[i];
    }
    for(int i = 0 ; i<n2 ; i++){
        b[i] = nums[i+n1];
    }
    mergeSort(a);
    mergeSort(b);
    merge(a,b,nums);
    a.clear() , b.clear();
}

int main(){
    int arr[] = {10,8,5,3,0,1,7,2,4,6,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    for(int i = 0 ; i<v.size() ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    mergeSort(v);
    for(int i = 0 ; i<v.size() ; i++){
        cout<<v[i]<<" ";
    }
}