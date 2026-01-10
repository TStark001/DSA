/*
    Sort the array in descending order using bubble sort. 
*/
#include<iostream>
using namespace std;
int main(){
    int arr[] = {6,2,5,4,1,3};
    int n = 6;
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i = 0 ; i<n-1 ; i++){
        for(int j = 0 ; j < n-1-i ; j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}