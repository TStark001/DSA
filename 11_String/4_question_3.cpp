#include <iostream>
using namespace std;

int main()
{
    string s = "Stark";
    int start = 0, end = s.size() - 1;

    // Reverse a string

    while (start < end)
    {
        swap(s[start], s[end]);
        start++;
        end--;
    }
    cout << s;
    cout << endl;

    // Size of string

    int size = 0;
    while (s[size] != '\0')
    {
        size++;
    }
    cout << "Size of string = " << size;
}