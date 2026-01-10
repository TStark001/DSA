#include <iostream>
#include <stack>
using namespace std;

string solve(string val1, string val2, char ch){
    string s = "";
    s += val1;
    s += val2;
    s.push_back(ch);
    return s;
}

int main(){
    string s = "-/*+79483";
    // we need to create 1 stack  for value
    stack<string> val;
    
    for (int i = s.size()-1; i >= 0 ; i--){
        // check if s[i] is a digit (0-9)
        if (s[i] >= 48 and s[i] <= 57){ // digit
            val.push(to_string(s[i] - 48));
        }
        else{ // s[i] it is -> +,-,*,/
            // kaam
            string val1 = val.top();
            val.pop();
            string val2 = val.top();
            val.pop();
            string ans = solve(val1,val2,s[i]);
            val.push(ans);
        }
    }
    
    cout << val.top() << endl;
    cout<<"79+4*8/3-";
    return 0;
}