#include <iostream>
using namespace std;

int main()
{
    char vowel[5];

    // using for loop
    for (int idx = 0; idx < 5; idx++)
    {
        cin >> vowel[idx];
    }
    for (int idx = 0; idx < 5; idx++)
    {
        cout << vowel[idx] << " ";
    }
}
