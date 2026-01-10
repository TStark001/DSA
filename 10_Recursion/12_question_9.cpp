/*
!   Given a number num and a value k. Print k multiples of num.
    Constraints : k > 0
    Input : num = 12 , k = 5
    Output : 12 24 36 48 60

    Input : num = 10 , k = 4
    Output : 10 20 30 40
*/
#include <iostream>
using namespace std;

void f(int num, int k)
{
    // base case
    if (k == 0)
    {
        return;
    }
    f(num, k - 1);
    cout << (num * k) << " ";
}

int main()
{
    int num;
    cout << "Enter a Number:-";
    cin >> num;
    int k;
    cout << "Enter k:-";
    cin >> k;
    f(num, k);
    return 0;
}