/*
#                           ADD A STRING
Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.
You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.

Example 1:
Input: num1 = "11", num2 = "123"
Output: "134"

Example 2:
Input: num1 = "456", num2 = "77"
Output: "533"

Example 3:
Input: num1 = "0", num2 = "0"
Output: "0"
*/
#include <iostream>
#include <algorithm>
using namespace std;

string add(string num1, string num2)
{
    int idx1 = num1.size() - 1, idx2 = num2.size() - 1;
    string ans;
    int carry = 0, sum;

    while (idx2 >= 0)
    {
        sum = (num1[idx1] - '0') + (num2[idx2] - '0') + carry;
        carry = sum / 10;
        char c = '0' + sum % 10;
        ans += c;
        idx2--, idx1--;
    }

    while (idx1 >= 0)
    {
        sum = (num1[idx1] - '0') + carry;
        carry = sum / 10;
        char c = '0' + sum % 10;
        ans += c;
        idx1--;
    }
    if (carry)
    {
        ans += '1';
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    string num1 = "11", num2 = "123";
    if (num1.size() < num2.size())
    {
        cout << add(num2, num1);
    }
    else
    {
        cout << add(num1, num2);
    }
    return 0;
}