/*
    default parameter:- parameter jisko function ma define kiya gya ho
                        usko default parameter bolta ha.
*/  
#include<iostream>
using namespace std;

int fact(int n=3) // n is default parameter ha.
{
    int ans=1;
    for(int i = 1; i <= n; i++)
    ans=ans*i;

    return ans;
}

int main (){
     int a;
    cout<<"Enter a number:-";
    cin>>a;

    cout<<fact()<<endl; // ya n ka factorial print karga
    cout<<fact(a)<<endl;

}