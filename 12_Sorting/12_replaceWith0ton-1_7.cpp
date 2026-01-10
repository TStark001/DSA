/*
    Given an array with N distinct elements, convert the given array
    to a form where all elements are in the range from 0 to N-1. The order
    of elements is the same , i.e., 0 is placed in the place of the smallest 
    elements , 1 is placed from second smallest elements, ... N-1 is placed for 
    the largest elements. 
*/
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[] = {19,12,23,8,16};
    int n = 5;
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int> v(n,0); // 0 means not visited
    int x = 0;
    for(int i = 0 ; i<n ; i++){
        int min = INT_MAX;
        int mindx = -1;
        for(int j = 0 ; j<n ; j++){
            if(v[j]==1){
                continue;
            }
            else{
                if(min>arr[j]){
                    min = arr[j];
                    mindx = j;
                }
            }
        }
        arr[mindx] = x;
        v[mindx] = 1; // visited
        x++;
    }
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}