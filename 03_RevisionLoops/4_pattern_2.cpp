/*
    Write a program to print + pattern given below.
                    *
                    *
                    *
                 ********
                    *
                    *
                    *
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // for loop to do some task for each line.
    for (int line = 0; line < n; line++)
    {

        for (int i = 0; i < n; i++)
        {
            if (line == n / 2)
            {
                cout << "*";
            }
            else if (i == n / 2)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

// iss program ma input sirf odd number hoga aagar even input aaya to correct pattern form nahi hoga.