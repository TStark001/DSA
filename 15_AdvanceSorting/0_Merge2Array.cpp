// Merge 2 sorted array
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &a, vector<int> &b, vector<int> &res)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
        {
            res[k] = a[i];
            i++;
            k++;
        }
        else
        {
            res[k] = b[j];
            j++;
            k++;
        }
    }
    if (i == a.size())
    { // a is at the end
        while (j < b.size())
        {
            res[k] = b[j];
            k++;
            j++;
        }
    }
    if (j == b.size())
    { // b is at the end
        while (j < a.size())
        {
            res[k] = a[i];
            k++;
            i++;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int n1 = sizeof(arr) / sizeof(arr[0]);
    vector<int> a(arr, arr + n1); // this will add arr of all element into vector.
    int brr[] = {5, 6, 7, 8, 9, 10, 11, 12};
    int n2 = sizeof(brr) / sizeof(brr[0]);
    vector<int> b(brr, brr + n2);
    vector<int> result(n1 + n2);
    merge(a, b, result);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}