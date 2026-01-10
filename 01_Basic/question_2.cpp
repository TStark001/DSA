#include<iostream>
using namespace std;

int main ()
{
    int a = 18; // binary form:-10010
    cout<<(a<<1)<<endl; // 36 -->binary form:-100100 (left shift)
    cout<<(a>>1)<<endl; // 9 -->binary form:-1001 (right shift)

    int b = 21; // binary form:-10101
    cout<<(a&b)<<endl; // 10000(binary form):- 16(decimal form)
    cout<<(a|b)<<endl; // 10111(binary form) :- 23(decimal form)
}