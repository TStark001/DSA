/*
    Sort string in decreasing order of values associated after removal of
    values smaller than X.
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "ASXYTSAXYZJ";
    string str;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }
    cout<<str<<endl;

    for(int i = 0 ; i<str.size()-1 ; i++){
        for(int j = 0 ; j<str.size()-1 ; j++){
            if(str[j]>str[j+1]){
                swap(str[j],str[j+1]);
            }
        }
    }
    cout<<str;
}