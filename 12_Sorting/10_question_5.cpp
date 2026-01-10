/*
    Given an array of stings arr[] with all stings in lowercase.Sort given 
    string using bubble sort and display the sorted array. 
*/
#include<iostream>
using namespace std;
int main(){
    char arr[] = {'r','e','v','a','f','h'};
    int n = 6;
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i = 0 ; i<n-1 ; i++){
        for(int  j = 0 ; j < n-1-i ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}