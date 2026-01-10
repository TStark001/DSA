/*
                    Maze Path
!           (Method-2 using 2 parameter)
*/
#include <iostream>
using namespace std;

int maze(int row, int col)
{
    if (row < 1 || col < 1)
        return 0;
    if (row == 1 && col == 1)
        return 1;
    int rightways = maze(row, col - 1);
    int downways = maze(row - 1, col);
    return rightways + downways;
}

void printPath(int row, int col, string s)
{
    if (row < 1 || col < 1)
        return;
    if (row == 1 && col == 1)
    { // destination reached
        cout << s << endl;
        return;
    }
    printPath(row, col - 1, s + 'R'); // rightways
    printPath(row - 1, col, s + 'D'); // downways
}

int main()
{
    cout << "No. of Ways = " << maze(3, 4) << endl;
    printPath(3, 4, "");
}