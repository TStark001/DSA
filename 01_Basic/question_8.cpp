// Write a program to print the value if it is divisible by 3 or 5.
#include <iostream>
using namespace std;

int main()
{
    int num1;
    cout<<"Enter num1:";
    cin>>num1;

    if((num1%3==0) || (num1%5==0)){
        cout<<num1<<endl;
    }
    return 0;
}