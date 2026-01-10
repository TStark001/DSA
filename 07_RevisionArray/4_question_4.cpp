/*
            Given a array sorted in increasing order of n size ,and an interger x,
            find if there exists a pair in the array whose absolute difference is exactly x.
!           abs() :- in-built function give absoulte difference
todo                Ex :- |5-10| = 5
*/
#include <iostream>
using namespace std;

int main()
{
    int array[] = {5, 10, 15, 20, 26};
    int n = 5;
    int x = 10;
    int i = 0;
    int j = 1;

    bool found = false;

    // code to check whether there is any pair with the given abs diff.
    while (i < n && j < n)
    {
        if (abs(array[i] - array[j]) == x)
        {
            found = true;
            break;
        }
        else if (abs(array[i] - array[j]) < x)
        {
            j++;
        }
        else
        {
            i++;
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

    return 0;
}