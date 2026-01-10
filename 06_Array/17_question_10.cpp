/*
                        Find the second largest number in given array(duplicates are present).
                                TODO    (FIRST METHOD)
*/
#include <iostream>
using namespace std;

int largestNumberIndex(int array[], int size)
{
    int max = INT16_MIN;
    int maxindex = -1;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            maxindex = i;
        }
    }
    return maxindex;
}

int main()
{
    int array[] = {2, 3, 5, 7, 6, 1, 7};
    int largest_number = largestNumberIndex(array, 7);
    cout << "Largest_Number = " << array[largest_number] << endl;
    // array[largest_number] = -1;
    int largest_element = array[largest_number];
    for (int i = 0; i < 7; i++)
    {
        if (array[i] == largest_element)
        {
            array[i] = -1;
        }
    }
    int second_largest_number = largestNumberIndex(array, 7);
    cout << "Second_Largest_Number = " << array[second_largest_number] << endl;
}