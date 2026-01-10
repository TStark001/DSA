// swapping two number using function.
#include<iostream>
using namespace std;

// function declaration
void swap(int &a , int &b) // pass by refrence(&)
{
    int c;
    c=a;
    a=b;
    b=c;
}

int main(){
    int a,b;
    cout<<"Enter two number:- ";
    cin>>a>>b;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    swap(a,b);
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    return 0;
}