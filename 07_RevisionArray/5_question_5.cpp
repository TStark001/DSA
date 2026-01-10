/*
    Given a vector arr[] sorted in increasing order.Return an array of square
    of each number sorted in increasing order.where size of vector is 1<size<101.
*/
#include <iostream>
using namespace std;

int main()
{
    int array[] = {-4, -3, -2, -1, 0, 5, 8, 10};
    int n = 8;
    int result_array[n];
    int i = 0, j = n - 1, k = n - 1;
    while (i <= j && k >= 0)
    {
        if (abs(array[i]) > abs(array[j]))
        {
            result_array[k] = array[i] * array[i];
            i++;
            k--;
        }
        else
        {
            result_array[k] = array[j] * array[j];
            j--;
            k--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << result_array[i] << " ";
    }

    return 0;
}
