// Print the sum of the first n natural number where n is the input.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;

    int i = 1; // loop variable

    while (i <= n)
    { // condition
        sum += i;
        i++; // updating loop variable..
    }
    cout << sum << endl;
    return 0;
}

/*
    #. entry controlled loop.
    #. first check the condition, then excutes the body.
*/