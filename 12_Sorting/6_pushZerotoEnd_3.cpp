/*
    Push zero to end while maintaining the relative order of other elements. 
*/
#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,0,1,2,0,3,0,4,0};
    int n = 9;
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    for(int i = 0 ; i <n-1 ; i++){
        for(int j = 0 ; j < n-1-i ; j++){
            if(arr[j]==0){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<endl;
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}