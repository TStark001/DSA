/*
    Print sum from 1 to N(Return Type)
!                   (Method-2)
*/
#include<iostream>
using namespace std;
int sum(int n){
    if(n==0) return 0;
    return n+sum(n-1);
}
int main(){
    cout<<sum(10);
    return 0;
}