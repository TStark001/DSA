// ! prime and factoial using function
#include<iostream>
using namespace std;

// function declaration for prime
bool prime(int n)
{
    if(n<2)
    return 0; // false

    for (int i=2;i<n;i++)
    {
        if(n%i==0)
        return 0;
    }

    return 1; // true
}


// function declaration for factorial
int fact(int n)
{
    int ans=1;
    for(int i = 1; i <= n; i++)
    ans=ans*i;

    return ans;
}

int main(){
    int a,b;
    cout<<"Enter two number:-";
    cin>>a>>b;

    // function call

    // a is prime or not.
    cout<<prime(a)<<endl; 
    // factorial of a
    cout<<"factorial of a="<<fact(a)<<endl; 
    // b is prime or not.
    cout<<prime(b)<<endl; 
    // factorial of b
    cout<<"factorial of b="<<fact(b)<<endl; 
    // b-a is prime or not
    cout<<prime(b-a)<<endl;
    // b-a is factorial
    cout<<"factorial of b-a= "<<fact(b-a)<<endl;


    return 0;
}