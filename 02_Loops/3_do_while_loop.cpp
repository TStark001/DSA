// Print the sum of the N integer in the input using do while loop.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    do
    {
        // int num;
        // cin>>num;
        sum += n;
        n--;
    } while (n > 0);

    cout << sum << endl;

    return 0;
}

/*
    not clear.
    #. exit controlled loop.
    #. firstly, excute the body then condition check
*/