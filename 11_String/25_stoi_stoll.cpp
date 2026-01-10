/*
#  stoi() :- convert string to integer
#  stoll() :- convert sting to long long
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "12345678";
    int x1 = stoi(str1);
    cout << x1 << endl;

    string str2 = "123456789123456789";
    long long x2 = stoll(str2);
    cout << x2;
}