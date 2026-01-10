#include <iostream>
using namespace std;

int main()
{
    int x = 18;
    float y = 7.9;

    int *ptr1 = &x;
    cout << ptr1 << endl;

    float *ptr2 = &y;
    cout << ptr2 << endl;

    return 0;
}