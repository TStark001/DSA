#include <iostream>
using namespace std;

int main()
{
    int x = 98;
    char ch = (char)x;
    cout << ch << endl;

    char c = 'b';
    int y = (int)c;
    cout << y << endl;

    char d = 'b';
    cout << (d + 1) << endl; // this is implicite conversion.

    int no_of_char = 9;
    for (int j = 0; j < no_of_char; j++)
    {
        char ch = (char)('A' + j);
        cout << ch;
    }

    return 0;
}

/*
            Ascaii table
            Dec             char
            65               A
            66               B
            67               C (and so on for Capital alphabets)

            97               a
            98               b
            99               c (and so on for small alphabets)
*/