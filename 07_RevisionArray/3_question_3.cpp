/*
            Given a array sorted in increasing order of n size ,and an interger x,
            find if there exists a pair in the array whose sum is exactly x.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr1[] = {-2, -1, 0, 1, 3, 6, 8, 11, 12};
    int n = 8;
    int i = 0;
    int j = n - 1;
    int x = 14;

    bool found = false;
    while (i < j)
    {
        if (arr1[i] + arr1[j] == x)
        {
            //! we found a pair
            found = true;
            break;
        }
        else if (arr1[i] + arr1[j] < x)
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
    if (found == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
//todo          SELF TRY USING FUNCTION.