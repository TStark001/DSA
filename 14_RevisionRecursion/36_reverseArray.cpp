/*
    Print all the elements of an array in reverse order
*/
#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &arr, int n, int currIdx)
{
    if (currIdx == n) // base case
    {
        return;
    }
    reverse(arr, n, currIdx + 1);
    cout << arr[currIdx] << " ";
}

int main()
{
    int n;
    cout << "Enter the size of array = ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverse(arr, n, 0);
}