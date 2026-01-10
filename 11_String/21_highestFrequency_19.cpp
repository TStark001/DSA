/*
!           HIGEST FREQUENCY CHARACTER
    Given a string consiting a lowercase English alphabets. Print the character
    that is occuring most number of time.
*                           (METHOD - 1)
*/
#include<iostream>
using namespace std;

int main(){
    string s = "physicswallah";
    int max = 0;
    for(int i = 0 ; i<s.size() ; i++){
        char c = s[i];
        int count = 1;
        for(int j = i+1 ;j<s.size();j++){
            if(s[j]==s[i]) count++;
        }
        if(max<count) max = count;
    }

    for(int i = 0 ; i<s.size() ; i++){
        char c = s[i];
        int count = 1;
        for(int j = i+1;j<s.size();j++){
            if(s[i]==s[j]) count++;
        }
        if(max==count) {
            cout<<c<<"="<<max<<endl;
        }
    }
    return 0;
}