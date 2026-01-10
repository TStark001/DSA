/*
    Generate all Binary strings of length n without consecutive 1's.
*/
#include<iostream>
using namespace std;

void generate(string s,int n){
    if(s.size()==n){
        cout<<s<<endl;
        return;
    }
    generate(s+'0',n);
    if(s==""||s[s.size()-1]=='0'){
        generate(s+'1',n);
    }
}

int main(){
    int n;
    cout<<"Enter n = ";
    cin>>n;
    cout<<"Your Binary String :- "<<endl;
    generate("",n);
}