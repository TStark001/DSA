/*
                        Max In Array
!                       (Method-2)
*/
#include <iostream>
#include <climits>
using namespace std;

int printMax(int arr[] , int n , int idx){
    if(idx == n) return INT_MIN;
    return max(arr[idx],printMax(arr,n,idx+1));
}

int main()
{
    int arr[] = {2, 1, 6, 31, 9, 0, 2, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Max Element :- "<<printMax(arr,n,0);
    return 0;
}