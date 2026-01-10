/*
       Check whether the given array is sorted or not.
       !          sorted---> matlab array assending order ma ha ya nahi.
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6};

    bool sortedflag = true;
    for (int i = 1; i < 6; i++)
    {
        if (array[i] <= array[i - 1])
        {
            sortedflag = false;
        }
    }
    cout << sortedflag << endl;

    return 0;
}

// iss program ma array ka first element ko array ka second element sa compare karna ha.