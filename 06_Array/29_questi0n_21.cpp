/*
        Write a program to display transpose of a matrix enter by the user.
*/
#include <iostream>
using namespace std;

int main()
{
    int r1, c1;
    cin >> r1 >> c1;
    int A[r1][c1];

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "Matrix given below :- " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    int transpose[c1][r1];
    for (int i = 0; i < c1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            transpose[i][j] = A[j][i];
        }
    }
    cout << "The Transpose of matrix given below :- " << endl;

    for (int i = 0; i < c1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}