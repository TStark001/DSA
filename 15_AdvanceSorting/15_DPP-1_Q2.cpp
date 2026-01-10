/*
#   LeetCode-493 :- Reverse Pair
    Given an integer array nums, return the number of reverse pairs in the array.
    A reverse pair is a pair (i, j) where:

    0 <= i < j < nums.length and
    nums[i] > 2 * nums[j].
*/
#include <iostream>
#include <vector>
using namespace std;

int reversePair(vector<int> &a, vector<int> &b)
{
    int i = 0, j = 0;
    int count = 0;
    while (i < a.size() && j < b.size())
    {
        if ((long long)a[i] > 2LL * b[j])
        {
            count += a.size() - i;
            j++;
        }
        else
        {
            i++;
        }
    }
    return count;
}
void merge(vector<int> &a, vector<int> &b, vector<int> &nums)
{
    int i = 0, j = 0, k = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
        {
            nums[k++] = a[i++];
        }
        else
        {
            nums[k++] = b[j++];
        }
    }
    if (i == a.size())
    {
        while (j < b.size())
        {
            nums[k++] = b[j++];
        }
    }
    if (j == b.size())
    {
        while (i < a.size())
        {
            nums[k++] = a[i++];
        }
    }
}
int mergeSort(vector<int> &nums)
{
    int n = nums.size();
    if (n <= 1)
        return 0;
    int n1 = n / 2, n2 = n - n / 2;
    vector<int> a(n1), b(n2);
    for (int i = 0; i < n1; i++)
    {
        a[i] = nums[i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = nums[i + n1];
    }
    int count = 0;
    count += mergeSort(a);
    count += mergeSort(b);
    count += reversePair(a, b);
    merge(a, b, nums);
    a.clear(), b.clear();
    return count;
}

int main()
{
    int arr[] = {1, 3, 2, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> nums(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl
         << "Reverse Pair :- " << mergeSort(nums) << endl;
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}