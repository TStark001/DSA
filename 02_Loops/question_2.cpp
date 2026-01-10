// check whether number is prime or not
#include <iostream>
using namespace std;

int main()
{
    int num1, sum = 0;
    cout << "Enter num1:";
    cin >> num1;

    for (int j = 1; j <= num1; j++)
    {
        if (num1 % j == 0)
        {
            sum++;
        }
    }
    if (sum == 2)
    {
        cout << num1 << " is Prime Number";
    }
    else
    {
        cout << num1 << " is not a Prime Number";
    }

    return 0;
}
