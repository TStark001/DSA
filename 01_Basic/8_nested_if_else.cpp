// Fing the maximum of three number using nested if else statement.
#include<iostream>
using namespace std;

int main()
{
     int n1,n2,n3;
    cout<<"Enter n1:";
    cin>>n1;
    cout<<"Enter n2:";
    cin>>n2;
    cout<<"Enter n3:";
    cin>>n3;

    if (n1>n2){
        if(n1>n3){
            cout<<"n1 is maximum"<<endl;
        }
        else{
            cout<<"n3 is maxium"<<endl;
        }
    }
    else {
        cout<<"n2 is maxium"<<endl;
    }

    return 0;
}