/*
!           HIGEST FREQUENCY CHARACTER
    Given a string consiting a lowercase English alphabets. Print the character
    that is occuring most number of time.
*                           (METHOD - 2)
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s = "physicswallah";
    vector<int> arr(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        int ascii = (int)ch;
        arr[ascii - 97]++;
    }

    int max = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == max)
        {
            int ascii = i + 97;
            char ch = (char)ascii;
            cout << ch << "=" << max << endl;
        }
    }
}