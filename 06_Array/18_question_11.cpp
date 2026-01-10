/*
                    Find the second largest number in given array(duplicates are present).
                                !    (SECOND METHOD)
*/
#include <iostream>
using namespace std;

//! function declaration.
int second_largest_element(int array[], int size)
{
    int max = INT16_MIN;
    int second_max = INT16_MIN;

    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (array[i] > second_max && array[i] != max)
        {
            second_max = array[i];
        }
    }

    return second_max;
}

int main()
{
    int array[] = {2, 3, 4, 7, 6, 1, 7};
    cout << "Second_largest_element = " << second_largest_element(array, 7) << endl;
    return 0;
}