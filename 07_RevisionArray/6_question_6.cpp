/*
    Given a vector arr[] sorted in increasing order of n size and an interger x,
    find the number of unique pairs that exist in the array whose absolute sum
    is exactly x.
*/
#include <iostream>
using namespace std;

int main()
{
    int array[] = {-2, -1, 0, 1, 3, 4, 6, 8, 11, 12};
    int n = 10;
    int x = 12;
    int pair = 0;
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (array[i] + array[j] == x)
        {
            //! we found a pair
            pair++;
            i++;
            j--;
        }
        else if (array[i] + array[j] < x)
        {
            //! sum is less than x , increase the sum
            i++;
        }
        else
        {
            //! sum is more than x , decrease the sum
            j--;
        }
    }
    cout << "Unique_Pair = " << pair;

    return 0;
}