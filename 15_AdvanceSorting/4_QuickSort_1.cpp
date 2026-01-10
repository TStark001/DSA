//  Sort Array using quicksort
#include<iostream>
using namespace std;

int partition(int arr[],int startIdx,int endIdx){
    int pivotElement = arr[startIdx];
    int count = 0;
    for(int i = startIdx+1 ; i<=endIdx ; i++){
        if(arr[i]<=pivotElement) count++;
    }
    int pivotIdx = count + startIdx;
    swap(arr[startIdx],arr[pivotIdx]);
    int i = startIdx , j = endIdx;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<=pivotElement) i++;
        if(arr[j]>pivotElement) j--;
        else if(arr[i]>pivotElement && arr[j]<=pivotElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}
void quickSort(int arr[],int startIdx,int endIdx){
    if(startIdx>=endIdx) return;
    int pivotIdx = partition(arr, startIdx , endIdx);
    quickSort(arr,startIdx,pivotIdx-1);
    quickSort(arr,pivotIdx+1,endIdx);
}

int main(){
    int arr[] = {5,1,8,2,7,6,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quickSort(arr,0,n-1);
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}