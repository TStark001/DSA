// write a program to take input from user for cost price(C.P) and selling price(S.P) and calculate profite or loss.(SELF DONE)
#include<iostream>
using namespace std;

int main()
{
    int cp;
    cout<<"Enter your Cost Price:";
    cin>>cp;
    int sp;
    cout<<"Enter your Selling Price:";
    cin>>sp;

    if(cp<sp){
        cout<<"Profit"<<endl;
    }
    else{
        cout<<"Loss!"<<endl;
    }


    return 0;

}