//              Dereference opertor(*)
#include <iostream>
using namespace std;

int main()
{
    int x = 18;

    int *ptr1 = &x;
    cout << "Address stored inside ptr1 : " << ptr1 << endl;
    cout << "Value present at the address stored in ptr : " << *ptr1 << endl; //dereference

    cout << endl;

    float y = 2.5;
    float *ptr2 = &y;
    cout << "Address stored inside ptr1 : " << ptr2 << endl;
    cout << "Value present at the address stored in ptr : " << *ptr2 << endl; //dereference

    return 0;
}