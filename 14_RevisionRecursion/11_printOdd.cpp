// Print Odd number up to n term using recursion
#include <iostream>
using namespace std;
void oddPrint(int a, int b)
{
    if (a > b)
        return;
    cout << a << " ";
    oddPrint(a + 2, b);
}
int main()
{
    int a, b;
    cout << "Enter a :- ";
    cin >> a;
    cout << "Enter b :- ";
    cin >> b;
    if (a % 2 == 0)
        a++;
    oddPrint(a, b);
    return 0;
}