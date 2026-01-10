#include<iostream>
using namespace std;

void fun(int x , int y=100){
    cout<<x<<" "<<y;
}
int main (){
    fun(10);
    return 0;
}