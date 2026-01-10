/*
!                               Quick Select
    Find the Kth smallest element in array using quick sort
*/
#include <iostream>
#include <vector>
using namespace std;

int partition(int arr[], int startIdx, int endIdx)
{
    int pivotElement = arr[(startIdx + endIdx) / 2];
    int count = 0;
    for (int i = startIdx; i <= endIdx; i++)
    {
        if (i == ((startIdx + endIdx) / 2))
            continue;
        if (arr[i] <= pivotElement)
            count++;
    }
    int pivotIdx = count + startIdx;
    swap(arr[(startIdx + endIdx) / 2], arr[pivotIdx]);
    int i = startIdx, j = endIdx;
    while (i < pivotIdx && j > pivotIdx)
    {
        if (arr[i] <= pivotElement)
            i++;
        if (arr[j] > pivotElement)
            j--;
        else if (arr[i] > pivotElement && arr[j] <= pivotElement)
        {
            swap(arr[i], arr[j]);
            i++, j--;
        }
    }
    return pivotIdx;
}
int KthSmallest(int arr[], int startIdx, int endIdx, int k)
{
    int pivotIdx = partition(arr, startIdx, endIdx);
    if (pivotIdx + 1 == k)
    {
        return arr[pivotIdx];
    }
    else if (pivotIdx + 1 < k)
    {
        return KthSmallest(arr, pivotIdx + 1, endIdx, k);
    }
    else
    {
        return KthSmallest(arr, startIdx, pivotIdx - 1, k);
    }
}

int main()
{
    int arr[] = {5, 1, 8, 2, 7, 6, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int result = KthSmallest(arr, 0, n - 1, k);
    cout << result;
}