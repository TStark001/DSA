// Fing the maximum of three number using if else statement.
#include<iostream>
using namespace std;

int main()
{
    int n1,n2,n3;
    cout<<"Enter n1:";
    cin>>n1;
    cout<<"Enter n2:";
    cin>>n2;
    cout<<"Enter n3:";
    cin>>n3;

    if(n1>n2 && n1>n3){
        cout<<"n1 is maximum"<<endl;
    }
    else if(n2>n1 && n2>n3){
        cout<<"n2 is maximum"<<endl;
    }
    else {
        cout<<"n3 is maximum"<<endl;
    }
    return 0;
}