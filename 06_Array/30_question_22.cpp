/*
    write a program to swap two matrix.
*/
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int A[a][b];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "First Matrix A : -" << endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    int c, d;
    cin >> c >> d;
    int B[c][d];

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < d; j++)
        {
            cin >> B[i][j];
        }
    }
    cout << "Second Matrix B : -" << endl;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < d; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    int C[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            C[i][j] = A[i][j];
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            A[i][j] = B[i][j];
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            B[i][j] = C[i][j];
        }
    }

    cout << endl;

    cout << "After Swapping Matrix A :-" << endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << "After Swapping Matrix B :-" << endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}