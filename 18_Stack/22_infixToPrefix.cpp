#include<iostream>
#include <stack>
using namespace std;

int priority(char ch){
    if (ch == '+' or ch == '-') return 1;
    else return 2;
}
string solve(string val1 , string val2 , char ch){
    string s = "";
    s.push_back(ch);
    s += val1;
    s += val2;
    return s;
}

int main(){
    string s = "(7+9)*4/8-3";
    // we need to create 2 stack , 1 for value and 1 for operators
    stack<string> val;
    stack<int> ops;
    
    for (int i = 0; i < s.size(); i++){
        // check if s[i] is a digit (0-9)
        if (s[i] >= 48 and s[i] <= 57){ // digit
            val.push(to_string(s[i] - 48));
        }
        else{ // s[i] it is -> +,-,*,/,(,)
            if (ops.size() == 0) ops.push(s[i]);
            else if(s[i] == '(') ops.push(s[i]);
            else if(ops.top() == '(') ops.push(s[i]);
            else if(s[i] == ')'){
                while(ops.top()!='('){
                    // work
                    char ch = ops.top();
                    ops.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                ops.pop(); // opening bracket ko bhi uda de
            }
            else if (priority(s[i]) > priority(ops.top())) ops.push(s[i]);
            else{ // priority(s[i])<=priority(ops.top())
                while (ops.size() > 0 and priority(s[i]) <= priority(ops.top())){
                    // I have to do -> val1 ops val2
                    char ch = ops.top();
                    ops.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                ops.push(s[i]);
            }
        }
    }
    // the operator stack can have some values , so make it empty.
    while (ops.size() > 0){
        char ch = ops.top();
        ops.pop();
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        string ans = solve(val1, val2, ch);
        val.push(ans);
    }
    cout << val.top() << endl;
    return 0;
}