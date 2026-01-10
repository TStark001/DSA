/*
        PATTERN :- TARGET SUM
        * Find the total number of pairs in the given array whose sum
        *       is equal to the given value x.
*/
#include <iostream>
using namespace std;

int main()
{
    int array[] = {3, 4, 6, 7, 1};
    int targetsum = 7;
    // int size = 5;
    int pair = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (array[i] + array[j] == targetsum)
            {
                pair++;
            }
        }
    }
    cout << "pair = " << pair << endl;

    return 0;
}