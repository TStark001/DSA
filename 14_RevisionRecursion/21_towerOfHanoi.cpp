// Tower of Hanoi
#include<iostream>
using namespace std;

void hanoi(int n, char a, char b , char c){
    // a -> Source , b -> Helper , c -> Destination
    if(n==0) return;
    hanoi(n-1,a,c,b);
    cout<<a<<"->"<<c<<endl;
    hanoi(n-1,b,a,c);
}
int main(){
    int n;
    cin>>n;
    hanoi(n,'A','B','C');
    return 0;
}