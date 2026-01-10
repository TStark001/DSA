// WAP to print sum of even number using functions.
#include<iostream>
using namespace std;

// function declaration
int even(int a)
{
    int sum=0;
    for ( int i=1 ; i<=a ; i++){
        if (i%2==0){
            sum= sum + i;
        }
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter the value of n:-";
    cin>>n;

    // function call
    int result = even(n);
   cout<<"The Sum of even number="<<result<<endl;

    return 0;
}