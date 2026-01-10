/*
    Given an array of integers, print a sum triangle using recursion from it such that the first level has
    all array elements. After that, at each level the number of elements is one less than the previous
    level and elements at the level will be the sum of consecutive two elements in the previous level.
    So, if sample input is [5, 4, 3, 2, 1], sample output will be:
    [5, 4, 3, 2, 1]
    [9, 7, 5, 3]
    [16, 12, 8]
    [28, 20]
    [48]
*/
#include<iostream>
#include<vector>
using namespace std;

void sumTriangle(vector<int> &v , int n){
    if(n==0) return;
    vector<int> temp(n-1);
    for(int i = 0 ; i<n ; i++){
        cout<<v[i]<<" ";
        if(i!=0){
            temp[i-1] = v[i-1]+v[i];
        }
    }
    cout<<endl;
    sumTriangle(temp,n-1);
}

int main(){
    int n;
    cout<<"Enter the size of Vector = ";
    cin>>n;

    vector<int> v(n);
    for(int i = 0 ; i<n ; i++){
        cin>>v[i];
    }
    sumTriangle(v,n);
}