/*
                        Maze Path
!               (Method-1 using four parameter)
*/ 
#include <iostream>
using namespace std;

int maze(int sr, int sc, int er, int ec)
{
    /*
        sr = starting row  , sc = starting column
        er = ending row    , ec = ending column
    */
    if (sr > er || sc > ec)
        return 0;
    if (sr == er || sc == ec)
        return 1;
    int rightways = maze(sr, sc + 1, er, ec);
    int downways = maze(sr + 1, sc, er, ec);
    int totalways = rightways + downways;
    return totalways;
}

void printPath(int sr, int sc, int er, int ec, string s)
{
    if (sr > er || sc > ec)
        return;
    if (sr == er && sc == ec)
    { // destination reached
        cout << s << endl;
        return;
    }
    printPath(sr, sc + 1, er, ec, s + 'R'); // rightways
    printPath(sr + 1, sc, er, ec, s + 'D'); // downways
}

int main()
{
    cout << "No. of Ways = " << maze(0, 0, 3, 3) << endl;
    printPath(0, 0, 3, 3, "");
}