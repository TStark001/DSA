/*
# LeetCode-78:- Print subset of a strings with unique character. 
!                   (Method-1)
*/
#include<iostream>
using namespace std;

void printsubset(string ans , string original){
    if(original == ""){
        cout<<ans<<endl;
        return;
    }
    char ch = original[0];
    printsubset(ans+ch , original.substr(1));
    printsubset(ans,original.substr(1));
}

int main(){
    string str = "abc";
    printsubset("",str);
    return 0;
}