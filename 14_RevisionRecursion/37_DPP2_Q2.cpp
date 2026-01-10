/*
    print index of a given element in an array. If not  present print -1.
*/
#include <iostream>
#include <vector>
using namespace std;

int idxOfElement(vector<int> &arr, int n, int currIdx, int temp)
{
    if (currIdx == n)
    {
        return -1;
    }
    if (arr[currIdx] == temp)
    {
        return currIdx;
    }
    return idxOfElement(arr, n, currIdx + 1, temp);
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

    int temp;
    cout << "Enter the element = ";
    cin >> temp;

    cout << idxOfElement(arr, n, 0, temp);
}