/*
    ! Find the unique number in given array where all the element are being
    !       repeated twice with one value being unique.
*/
#include <iostream>
using namespace std;

int main()
{
    int array[] = {2, 3, 1, 3, 2, 4, 1};
    int size = 7;

    // loop for finding the pairs and replace with -1 present in array.
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] == array[j])
            {
                array[i] = array[j] = -1;
            }
        }
    }

    // loop for finding unique value present in arrray.
    for (int i = 0; i < size; i++)
    {
        if (array[i] > 0)
        {
            cout << array[i] << endl;
        }
    }

    return 0;
}