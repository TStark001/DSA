// Design a calculator to perform basic arithmetic operations(+,-,/,*,%)
#include<iostream>
using namespace std;

int main(){
    int n1;
    cout<<"Enter n1:";
    cin>>n1;

    int  n2;
    cout<<"Enter n2:";
    cin>>n2;

    cout<<"Enter an operator(+,-,*,/,%):";
    char Operator;
    cin>>Operator;

    switch(Operator){
        case '+':
            cout<<"Sum is:"<<n1+n2<<endl;
            break;
        case '-':
            cout<<"Difference is:"<<n1-n2<<endl;
            break;
        case '*':
            cout<<"Product is:"<<n1*n2<<endl;
            break;
        case '/':
            cout<<"Division is:"<<n1/n2<<endl;
            break;
        case '%':
            cout<<"Reminder is:"<<n1%n2<<endl;
            break;
        default:
            cout<<"Enter a valid operator!"<<endl;
    }
    

    return 0;
}