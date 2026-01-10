/*
        MultiDimensional Array :- array of arrays
        Why MultiDimensional Array :- 1. representing grids
                                      2. faster access
                                      3. predefined size
!           Syntax :- data_type array_name[size1][size2]......[sizeN];
        2D Array :- 1. dimension :- 2[i.e. row or column]
                    2. represent in the form of table.
*           Syntax :- data_tye array_name[row][column];
                         array[i][j];
                         here i :- row number
                              j:- column number
*/
//          Taking 2D Array as input
#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int array[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> array[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << array[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}