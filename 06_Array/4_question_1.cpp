// ! Calculate the sum of all the elements in the given array.

#include <iostream>
using namespace std;

int main()
{
    int array[] = {4, 7, 12, 89, 5};
    int sum = 0;
    int size = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < size; i++)
    {
        sum = sum + array[i];
        // sum+=array[i]; // *aasa bhi likh sakata ha
    }
    cout << "sum=" << sum << endl;

    return 0;
}