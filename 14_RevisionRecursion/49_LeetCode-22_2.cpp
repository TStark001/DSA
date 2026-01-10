/*
#   LeetCode-22 :- Generate Parentheses
    Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

    Example 1:
    Input: n = 3
    Output: ["((()))","(()())","(())()","()(())","()()()"]

    Example 2:
    Input: n = 1
    Output: ["()"]

    Constraints:
    1 <= n <= 8
*/
//!                   (METHOD-2)
#include <iostream>
#include <vector>
using namespace std;

void generate(vector<string> &ans, string s, int open, int close, int n)
{
    if (close == n)
    {
        ans.push_back(s);
        return;
    }
    if (open < n)
        generate(ans, s + '(', open + 1, close, n);
    if (close < open)
        generate(ans, s + ')', open, close + 1, n);
}
vector<string> generateParenthesis(int n)
{
    vector<string> ans;
    generate(ans, "", 0, 0, n);
    return ans;
}

int main()
{
    int n = 3;
    vector<string> result = generateParenthesis(n);

    // Print the generated combinations
    for (string s : result)
    {
        cout << s << endl;
    }
}