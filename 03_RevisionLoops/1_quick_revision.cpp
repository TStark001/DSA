// quick revision for loops
#include<iostream>
using namespace std;

int main ()
{
    for(int i=0;i<10;i++){
        cout<<i<<" ";
    }
    cout<<endl;
    int i=0;
    while (i<10)
    {
        cout<<i<<" ";
        i++;
    }
    cout<<endl;
    int n=0;
    do {
        cout<<n<<" ";
        n++;
    }
    while(n<20);
    return 0;
    
}