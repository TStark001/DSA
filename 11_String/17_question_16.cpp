/*
    Input a string of length n and update all the odd postion  is the
    string to charcater '#'.
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            count;
        }
        else
        {
            count++;
        }
    }
    cout << count << endl;

    for (int i = 1; i < s.size(); i += 2)
    {
        s[i] = '#';
        /* if (s[i] % 2 == 0)
        {
            s[i] = '#';
        } */
    }

    cout << s;
    return 0;
}