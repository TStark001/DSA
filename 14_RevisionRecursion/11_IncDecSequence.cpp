/*
    Print increasing decreasing sequence
    Input :- n=4
    Output :- 1 2 3 4 3 2 1
*/
#include<iostream>
using namespace std;

void print(int x , int n){
    if(x>=n){
        cout<<n<<" ";
        return;
    }
    cout<<x<<" ";
    print(x+1,n);
    cout<<x<<" ";
}

int main(){
    int a , b;
    cin>>a>>b;
    print(a,b);
    return 0;
}