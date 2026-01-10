#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {5,4,6,3,2,1};
    int n = 6;
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    // bubbleSort
    for(int i = 0 ; i<n-1 ; i++){ // n-1 passes
        // traverse
        for(int j = 0 ; j<n-1-i ; j++){
            if(arr[j]>arr[j+1]){
                /* int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; */
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
/*
    time complexity :- O(n^2){big O of n square}
*/