// nCr program using function
#include<iostream>
using namespace std;

int fact(int x)
{
    int factorial = 1;
    for ( int i = 2 ; i<= x ; i++){
        factorial = factorial*i;
    }
    return factorial;
}

int main (){
    int n,r; 
    cout<<"Enter n:-";
    cin>>n;
    cout<<"Enter r:-";
    cin>>r;

    int nCr = fact(n)/(fact(r)*fact(n-r));
    cout<<"nCr="<<nCr;

    return 0;
}