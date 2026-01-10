#include <iostream>
using namespace std;

int main()
{
    int arr[2] = {6, 19};
    int *ptr = &arr[0];

    cout << ++*ptr << endl;
    cout << arr[0] << " " << arr[1] << endl;
    return 0;
}
/*
        *++ptr :- first move pointer by 4 bytes then dereference it.
        ++*ptr :- first dereference then increament the dereference value.
*/