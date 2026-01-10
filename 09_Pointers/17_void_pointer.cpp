#include <iostream>
using namespace std;

int main()
{
    float f = 10.2;
    int x = 10;
    void *ptr = &f;
    ptr = &x;

    int *intpointer = (int *)ptr; // typecasting
    cout << *intpointer << endl;
    return 0;
}