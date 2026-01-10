/*
    Given two vector arr1[] and arr2[] of size m and n sorted in increasing order.
    Merge the two array into single sorted array of size m+n.
!                               [METHOD-1]
*/
#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {1, 6, 7, 10};
    int arr2[] = {0, 1, 3, 8, 11, 12, 15, 18};
    int m = 4; // size of arr1.
    int n = 8; // size of arr2.
    // code to merge two sorted array

    int result[m + n];
    int i = 0; // will help to irrate element on array 1.
    int j = 0; // will help to irrate element on array 2.
    int k = 0; // will help to irrate element on result array.

    while (i < m && j < n)
    //! both i and j should be within the limits of arr1 and arr2.
    {
        if (arr1[i] < arr2[j])
        {
            result[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            result[k] = arr2[j];
            k++;
            j++;
        }
    }

    while (i < m)
    //* array 2 was exausted and we still got element left in array1.
    {
        result[k] = arr1[i];
        k++;
        i++;
    }

    while (j < n)
    // todo array 1 was exausted and we still got element left in array2.
    {
        result[k] = arr2[j];
        k++;
        j++;
    }

    // display result
    for (int i = 0; i < (m + n); i++)
    {
        cout << result[i] << " ";
    }
}