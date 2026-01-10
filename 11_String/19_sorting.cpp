/*
#           SORTING
    Sort--> ascii value ka order ma sort kar ka denga and
            aagar hum getline ka through space lenga to
            wo bhi ascii value ka order ma arange ho jayga
            %ASCII value of space(32)
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    sort(s.begin(), s.end());
    cout << s;
    /* char c = ' ';
    cout<<(int)c; */
    return 0;
}