// print n to 1 using recursion
#include<iostream>
using namespace std;
void print(int n){
    if (n==0) return; // base case 
    cout<<n<<endl; // kaam
    print(n-1); // call
}
int main(){
    int n;
    cout<<"Enter n = ";
    cin>>n;
    print(n);
    return 0;
}