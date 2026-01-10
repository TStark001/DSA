#include <iostream>
#include <stack>
using namespace std;

int priority(char ch){
    if (ch == '+' or ch == '-') return 1;
    else return 2;
}
int solve(int val1, int val2, char ch){
    if (ch == '+') return val1 + val2;
    else if (ch == '-') return val1 - val2;
    else if (ch == '*') return val1 * val2;
    else return val1 / val2;
}

int main(){
    string s = "2+6*4/8-3";
    // we need to create 2 stack , 1 for value and 1 for operators
    stack<int> val;
    stack<int> ops;
    
    for (int i = 0; i < s.size(); i++){
        // check if s[i] is a digit (0-9)
        if (s[i] >= 48 and s[i] <= 57){ // digit
            val.push(s[i] - 48);
        }
        else{ // s[i] it is -> +,-,*,/
            if (ops.size() == 0 or priority(s[i]) > priority(ops.top())){
                ops.push(s[i]);
            }
            else{ // priority(s[i])<=priority(ops.top())
                while (ops.size() > 0 and priority(s[i]) <= priority(ops.top())){
                    // I have to do -> val1 ops val2
                    char ch = ops.top();
                    ops.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1, val2, ch);
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
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(val1, val2, ch);
        val.push(ans);
    }
    cout << val.top() << endl;
    // cout << 2 + 6 * 4 / 8 - 3;
    return 0;
}