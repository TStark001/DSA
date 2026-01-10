#include <iostream>
using namespace std;

void process(int *arr, int n)
{
    // inside this function we have the access the same array in the main
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    *(arr + 1) = 33;
}

int main()
{
    int arr[3] = {12, 4, 6};
    process(arr, 3);
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}