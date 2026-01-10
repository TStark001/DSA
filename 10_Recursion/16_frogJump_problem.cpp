/*
*                                      (FROG JUMP PROBLEM)
!    There are N stones numbered 1,2,...,N.For each i(1<=i<=n) , the height of stone i is hi.
!    There is a frog who is initially on stone 1.He will repeat the following action some number
!    of times to reach the stone N:

!    If the frog is currently on stone i, jump to stone i+1 or stone i+2.Here, a cost of |hi-hj|
!    is incurred, where j is the stone to land on.

!    Find the minimum possible total cost incurred before the frog reaches Stone N.
        Input :- n = 4
        arr[] = 10 30 40 20
        Output :- 30
*/
#include <iostream>
using namespace std;

int f(int *h, int n, int i)
{
    if (i == n - 1)
    {
        return 0;
    }
    if (i == n - 2)
    {
        return f(h, n, i + 1) + abs(h[i] - h[i + 1]);
    }
    return min(f(h, n, i + 1) + abs(h[i] - h[i + 1]), f(h, n, i + 2) + abs(h[i] - h[i + 2]));
}

int main()
{
    int arr[] = {10, 30, 40, 20};
    int n = 4;
    cout << f(arr, n, 0);

    return 0;
}