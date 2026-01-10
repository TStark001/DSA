/*
        Find the difference between the sum of elements at even indices to
            the sum of odd indices.
*/
#include <iostream>
using namespace std;

int main()
{
    int array[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;

    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
        {
            sum += array[i];
        }
        else
        {
            sum -= array[i];
        }
    }
    cout << "sum = " << sum << endl;

    return 0;
}