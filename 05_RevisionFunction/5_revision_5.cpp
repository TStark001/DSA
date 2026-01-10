// Given two number a and b, write a program to print all the odd number between them.
#include<iostream>
using namespace std;

bool isodd(int num){
    if(num % 2==0){
        // number is even
        return false;
    }
    else{
        // number is odd
        return true;
    }
}

int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;

    for(int i=a;i<=b;i++){
        if(isodd(i)){
            cout<<(i)<<" ";
        }
    }

    return 0;
}