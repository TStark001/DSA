/*
!           CHECK IF STRING ROTATED BY TWO PLACES
Given two strings a and b. The task is to find if the string 'b' can be obtained by rotating(in any direction) string 'a' by exactly 2 places.

Example:-
    Input:-
            a = amazon
            b = azonam
    Output:-
            1
    Explanation:- amazon can be rotated anti-clockwise by two places, whick will make it
                    as azonam.
*/
#include <iostream>
using namespace std;

// # function for clockwise rotation
void rotateclockwise(string &s)
{
    char c = s[s.size() - 1];
    int idx = s.size() - 2;
    while (idx >= 0)
    {
        s[idx + 1] = s[idx];
        idx--;
    }
    s[0] = c;
}

//* function for anticlockwise rotation
void rotateanticlockwise(string &s)
{
    char c = s[0];
    int idx = 1;
    while (idx < s.size())
    {
        s[idx - 1] = s[idx];
        idx++;
    }
    s[s.size() - 1] = c;
}

bool isrotated(string str1, string str2)
{
    if (str1.size() != str2.size())
    {
        return 0;
    }
    string clockwise, anticlockwise;
    clockwise = str1;
    rotateclockwise(clockwise);
    rotateclockwise(clockwise);

    if (clockwise == str2)
    {
        return 1;
    }
    else
    {
        return 0;
    }

    anticlockwise = str1;
    rotateanticlockwise(anticlockwise);
    rotateanticlockwise(anticlockwise);

    if (anticlockwise == str2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    string str1 = "amazon";
    string str2 = "azonam";
    cout << isrotated(str1, str2);
}
