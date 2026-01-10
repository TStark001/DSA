#include <iostream>
using namespace std;

int main()
{
    int *ptr = NULL;
    {
        int x = 10;
        int *ptr = &x;
    }
    cout << ptr;
    return 0;
}