/*
"+"(unary plus)
"-"(unary minus)
"++"(increment operator)
"--"(decrement operator)
"!"(logical complement operator or logical not) aagar exp false ha to logical not or logical complement operator true return karaga.


pre increament(++a) --> phele barayaga then print karga
post increament(a++) --> phele print karga then barayaga karga
*/




#include<iostream>
using namespace std;

int main()
{
    int a=4;
    cout<<(++a)<<endl; //5
    int b=5;
    cout<<(b++)<<endl;//5
    int c=6;
    cout<<(--c)<<endl; //5
    int d=7;
    cout<<(d--)<<endl; //7
    int f=b+9;
    cout<<(f)<<endl; //15

    return 0;
}



