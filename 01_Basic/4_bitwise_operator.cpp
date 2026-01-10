/*
bitwise operators:-
1."~"(bitwise complement)
2."<<"(left shift) --> multiply by 2
3.">>"(right shift) --> divide by 2
4."|"(bitwise or)
5."&"(bitwise and)
6."^"(bitwise exclusive OR)
*/

#include <iostream>
using namespace std;

int main()
{
    int num1 = 5;                // binary form=0101
    cout << (num1 << 1) << endl; // 10 --> binary form=1010
    cout << (num1 >> 1) << endl; // 2 --> binary form=10

    int num2 = 8;                  // binary form=1000
    cout << (num1 & num2) << endl; // 0
    cout << (num1 | num2) << endl; // 1101(binary form) :- 13 (decimal form) output:-13

    return 0;
}
