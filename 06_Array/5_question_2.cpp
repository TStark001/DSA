// Find the maximum value out of all the elements in the array.

#include <iostream>
using namespace std;

int main()
{
    int array[] = {3, 6, 8, 10, 4};
    int max = array[0];

    for (int i = 0; i < 5; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    cout << "max element is = " << max << endl;
}
