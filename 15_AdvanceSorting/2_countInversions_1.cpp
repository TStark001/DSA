/*
#   Count Inversion
    Two element of an array a , a[i] and a[j] form an inversion if a[i]>a[j] and i<j.
    Given an array of integers. Find the Inversion count in the array.
$                                      (METHOD-1[Brute Force])
*/
#include<iostream>
#include<vector>
using namespace std;

int main(){
    // int arr[] = {10,8,5,3,0,1,7,2,4,6,9};
    int arr[] = {5,1,3,0,4,2,6}; // 5+1+2+1=9
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    for(int i = 0 ; i<v.size() ; i++){
        cout<<v[i]<<" ";
    }
    int count = 0;
    for(int i = 0 ; i<n-1 ; i++){
        for(int j = i+1 ; j<n ; j++){
            if(v[i]>v[j]) count++;
        }
    }
    cout<<endl<<"Total No. of Inversion = "<<count;
}