/*
    Remove all occurrences of 'a' from a strings
*/
#include <iostream>
#include <string>
using namespace std;

void removeChar1(string ans, string original)
{
    if (original.size() == 0)
    {
        cout << ans;
        return;
    }
    char ch = original[0];
    if (ch == 'a')
        removeChar1(ans, original.substr(1));
    else
        removeChar1(ans + ch, original.substr(1));
}

void removechar2(string ans, string original, int idx)
{
    if (idx == original.size())
    {
        cout << ans;
        return;
    }
    char ch = original[idx];
    if (ch == 'a')
        removechar2(ans, original, idx + 1);
    else
        removechar2(ans + ch, original, idx + 1);
}

int main()
{
    string str = "tony stark";
    removeChar1("", str);
    cout << endl;
    removechar2("", str, 0);
    return 0;
}