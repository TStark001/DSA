/*
^       REVERSE A STRING
*/
#include <iostream>
using namespace std;

string revStr(string s)
{
    int i = 0;
    int j = s.size() - 1;
    while (i < j)
    {
        swap(s[i], s[j]);
        i++;
        j--;
    }
    return s;
}

int sizeStr(string s)
{
    int size = 0;
    while (s[size] != '\0')
    {
        size++;
    }
    return size;
}

int main()
{
    string s;
    cin >> s;
    cout << revStr(s) << endl;
    string s1;
    cin >> s1;
    cout << sizeStr(s1) << endl;
    return 0;
}