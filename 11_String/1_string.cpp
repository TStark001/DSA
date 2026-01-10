#include <iostream>
using namespace std;

int main()
{
    string s = "Stark";
    cout << s.size() << endl;

    string s1 = "Tony";
    string s2 = "Stark";
    string s3 = s1 + s2;
    s3.push_back('s'); // this will add 's' char to last of the string.
    cout << s3 << endl;

    s1.append(s2);
    cout << s1 << endl;

    s3.pop_back(); // this will remove one char from last of the stirng.
    cout << s3 << endl;

    string a = "\"Stark\""; //^ (\) :- escape charcter.
    cout << a << endl;

    string a1;
    getline(cin, a1);
    cout << a1 << endl;
    cout << a1.size() << endl;
}