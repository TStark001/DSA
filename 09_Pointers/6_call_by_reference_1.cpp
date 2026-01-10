/*
*       call by reference using pointer
                SWAPING TWO VALUES
*/
#include <iostream>
using namespace std;

void swap(int *x, int *y)
    // try to swap x and y
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int x = 10, y = 20;
    int *p1 = &x;
    int *p2 = &y;

    swap(x, y);
    cout << "X = " << x << endl
         << "Y = " << y;
    return 0;
}