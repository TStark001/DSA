#include <iostream>
using namespace std;

int main()
{
    bool exp1 = false;
    bool exp2 = true;

    cout << (exp1 && exp2) << endl; // false
    cout << (exp1 || exp2) << endl; // true
    cout << (!exp1) << endl;        // true
}

// logical operators:--this will compare the two experision.
// "&&" :-- logical and
// "||" :-- logical or
// "!" :-- logical not this will return reverse value. aagar exp false ha to logical not operator true return karaga.