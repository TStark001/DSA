/*
"sizeof" --> this is operator which will gives the size.
size of interger = 4 bytes
size of character = 1 bytes
*/

#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    cout << sizeof(a) << endl; // 4

    char name = 'a';
    cout << sizeof(name) << endl; // 1

    bool flag;
    a == a ? flag = true : flag = false;
    cout << flag << endl; // true
    a == name ? flag = true : flag = false;
    cout << flag << endl; // false

    cout << &a << endl;
    return 0;
}
