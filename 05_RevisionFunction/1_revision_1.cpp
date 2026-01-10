#include<iostream>
using namespace std;

int add(int x,int y){
    int result = x+y;
    return result;
}

void fun(string name){
    cout<<"Are You having fun "<<name<<"?"<<endl;
}

int main()
{
    cout<<add(5,5)<<endl;
    fun("Stark");

    return 0;
}

