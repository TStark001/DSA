/*
    Given two sorted array A and B , generate all possible arrays such that first element is taken
    from A then from b then from A, and so on in increasing order till the arrays are exhausted.
    The generated arrays should end up with  an element from B.

    Input :- A = {10,15,25}  ,  B = {1,5,20,30}
    Output :- {10,20} {10,20,25,30} {10,30} {15,20} {15,20,25,30} {15,30} {25,30}
*/
#include <iostream>
#include <vector>
using namespace std;

void generateAlternateArrays(vector<int> &arr1, vector<int> &arr2, int i, int j, vector<int> &temp, bool isFromA)
{
    if (isFromA && temp.size() > 1)
    {
        for (int x = 0; x < temp.size(); x++)
        {
            cout << temp[x] << " ";
        }
        cout << endl;
    }
    if (isFromA)
    {
        for (int k = i; k < arr1.size(); k++)
        {
            if (temp.empty())
            {
                temp.push_back(arr1[k]);
                generateAlternateArrays(arr1, arr2, k + 1, j, temp, false);
                temp.pop_back();
            }
            else if (arr1[k] > temp.back())
            {
                temp.push_back(arr1[k]);
                generateAlternateArrays(arr1, arr2, k + 1, j, temp, false);
                temp.pop_back();
            }
        }
    }
    else
    {
        for (int k = j; k < arr2.size(); k++)
        {
            if (arr2[k] > temp.back())
            {
                temp.push_back(arr2[k]);
                generateAlternateArrays(arr1, arr2, i, k + 1, temp, true);
                temp.pop_back();
            }
        }
    }
}

int main()
{
    vector<int> A = {10, 15, 25};
    vector<int> B = {1, 5, 20, 30};
    vector<int> temp;
    generateAlternateArrays(A, B, 0, 0, temp, true);
}