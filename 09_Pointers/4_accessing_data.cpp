//*     ACCESSING DATA THROUGH A POINTER 
#include <iostream>
using namespace std;

int main()
{
    int x = 18;

    int *ptr1 = &x;
    cout << "Address stored inside ptr1 : " << ptr1 << endl;
    cout << "Value present at the address stored in ptr : " << *ptr1 << endl; // dereference

    cout << endl;

    float y = 2.5;
    float *ptr2 = &y;
    cout << "Address stored inside ptr1 : " << ptr2 << endl;
    cout << "Value present at the address stored in ptr : " << *ptr2 << endl; // dereference

    cout << endl;

    x = 23; // the bucket x updated the value 18 -> 23
    // but ptr still pointing to same bucket
    // now we dereference the ptr , we will get 23

    cout << "New updated value of x = " << x << endl;
    cout << "ptr1 still pointing to same memory which has 23 instead of 18 = " << *ptr1 << endl;

    cout << endl;

    // updating x with pointer
    cout << "updating x with pointer" << endl;
    *ptr1 = 50;
    cout << "New value of x = " << x << endl;
    cout << "New value pointed by ptr1 = " << *ptr1 << endl;

    return 0;
}