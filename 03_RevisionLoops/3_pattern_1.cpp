// ALPHABET DIAMOND PATTERN FOR 'N' NUMBER.
#include <iostream>
using namespace std;

int main()
{
    int n; // given input
    cin >> n;

    // loop to print upper triangle
    for (int line = 1; line <= n; line++)
    {
        // this loop does some work for each line.

        // below the loop is to print space.
        int no_of_space = (n - line);
        for (int k = 0; k < no_of_space; k++)
        {
            cout << " ";
        }

        // below loop is to print char for each line.
        int no_of_char = 2 * line - 1;
        for (int j = 0; j < no_of_char; j++)
        {
            char ch = (char)('A' + j);
            cout << ch;
        }
        cout << endl;
    }

    // loop for print lower triangle
    for (int line = n + 1; line <= 2 * n - 1; line++)
    {
        int no_of_space = (line - n);
        for (int k = 0; k < no_of_space; k++)
        {
            cout << " ";
        }

        int no_of_char = 2 * (2 * n - line) - 1;
        for (int j = 0; j < no_of_char; j++)
        {
            cout << (char)('A' + j);
        }
        cout << endl;
    }
    return 0;
}