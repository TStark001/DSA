#include<iostream>
using namespace std;

int main ()
{
    int p=5;
    int &q=p; // here & is ampersent operator which locate the address and same mermory location.

    q++;
    cout<<p<<endl;

    cout<<&p<<endl;
    cout<<&q<<endl;
}