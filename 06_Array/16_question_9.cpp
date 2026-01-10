// Find the second largest number in given array(assuming unique value are present in array).
#include <iostream>
#include <vector>
using namespace std;

// function declaration for largest number
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
    int array[] = {2, 3, 5, 7, 6, 1};
    int largest_number = largestNumberIndex(array, 6);
    cout << "Largest_Number = " << array[largest_number] << endl;
    array[largest_number] = -1;
    int second_largest_number = largestNumberIndex(array, 6);
    cout << "Second_largest_Number = " << array[second_largest_number] << endl;
    return 0;
}