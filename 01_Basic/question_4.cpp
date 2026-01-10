// write a program to take input from user for cost price(C.P) and selling price(S.P) and calculate profite or loss
#include<iostream>
using namespace std;

int main()
{
    int cp , sp;
    cout<<"Enter Celling price:";
    cin>>cp;
    cout<<"Enter Selling price:";
    cin>>sp;

    if (sp>cp){
        int profit = sp-cp;
        cout<<"Your Profit is:"<<profit<<endl;
    }
    else if(cp>sp){
        int loss = cp-sp;
        cout<<"Your Loss is:"<<loss<<endl;
    }
    else {
        cout<<"No profit nor loss!"<<endl;
    }
    return 0;

}