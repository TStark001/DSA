// Print the sum of the first n natural number where n is the input using for loop.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}

/*
    #. entry controlled loop.
    #. firstly initizes, then, condition check, execute body, update.
*/