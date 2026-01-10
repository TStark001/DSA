// is program ma user through input liya ha 'a' or 'b' then dono input ko swap kar ka add kar diya ha.
#include<iostream>
using namespace std;

int main ()
{
    int a;
    cout<<"a:";
    cin>>a;
    int b;
    cout<<"b:";
    cin>>b;

    int c;
    c=b;
    b=a;
    a=c;

    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    cout<<"sum of a+b:"<<a+b;
    return 0;
}
