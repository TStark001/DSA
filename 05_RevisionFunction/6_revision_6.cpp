// Given two number a and b, write a program to print all the prime number present between a and b.
#include<iostream>
using namespace std;

bool isprime(int num){
    for(int i=2;i<=(num-1);i++){
        if(num%i==0){
            return false;
        }
    }
            return true;
}

bool isprimebtr(int num){
    for(int i=2;i*i<=num;i++){
        // i*i<=num -> i<= sqrt(num)
        if(num%i==0){
            return false;
        }
    }
        return true;
}

int main()
{
    int a,b;
    cin>>a;
    cin>>b;

    for(int i=a;i<=b;i++){
        if(isprimebtr(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}