#include<iostream>
using namespace std;

// declaration of function
int sum(int a , int b)
{
    int ans = a+b;
    return ans;
}


int mul(int a,int b)
{
    int ans=a*b;
    return ans;
}


int main (){
    int a,b;
    cout<<"Enter Two Number:- ";
    cin>>a>>b;

    //function call
    cout<<"sum="<<sum(a,b)<<endl;
    cout<<"mul="<<mul(a,b)<<endl;

    return 0;
}