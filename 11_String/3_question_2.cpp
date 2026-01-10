#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter your Name :- ";
    cin >> s;

    for (char name : s)
    {
        char lowcase = name;

        if (isalpha(name))
        {
            if (lowcase == 'a' || lowcase == 'e' || lowcase == 'i' || lowcase == 'o' || lowcase == 'u')
            {
                cout << lowcase << " is a Vowel." << endl;
            }
            else
            {
                cout << lowcase << " is Not a Vowel!" << endl;
            }
        }
        else
        {
            cout << lowcase << " is Not a Alphabet!" << endl;
        }
    }
    return 0;
}