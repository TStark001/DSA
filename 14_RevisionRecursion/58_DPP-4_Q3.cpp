/*
#   LeetCode-2094 :- Finding 3-Digit Even Number
    You are given an integer array digits, where each element is a digit. The array may contain duplicates.
    You need to find all the unique integers that follow the given requirements:
    The integer consists of the concatenation of three elements from digits in any arbitrary order.
    The integer does not have leading zeros.
    The integer is even.
    For example, if the given digits were [1, 2, 3], integers 132 and 312 follow the requirements.
    Return a sorted array of the unique integers.

    Example 1:
    Input: digits = [2,1,3,0]
    Output: [102,120,130,132,210,230,302,310,312,320]
    Explanation: All the possible integers that follow the requirements are in the output array.
    Notice that there are no odd integers or integers with leading zeros.

    Example 2:
    Input: digits = [2,2,8,8,2]
    Output: [222,228,282,288,822,828,882]
    Explanation: The same digit can be used as many times as it appears in digits.
    In this example, the digit 8 is used twice each time in 288, 828, and 882.

    Example 3:
    Input: digits = [3,7,5]
    Output: []
    Explanation: No even integers can be formed using the given digits.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void build(int pos, int num, vector<int> &freq, vector<int> &ans)
{
    // base case :- if we have constructed 3 digits
    if (pos == 3)
    {
        ans.push_back(num);
        return;
    }

    if (pos == 0)
    {
        for (int i = 1; i <= 9; i++)
        {
            if (freq[i] > 0)
            { // iska matlab input array ma i kitna baar present ha
                freq[i]--;
                build(1, num * 10 + i, freq, ans);
                freq[i]++;
            }
        }
    }
    else if (pos == 1)
    {
        for (int i = 0; i <= 9; i++)
        {
            if (freq[i] > 0)
            {
                freq[i]--;
                build(2, num * 10 + i, freq, ans);
                freq[i]++;
            }
        }
    }
    else
    {
        for (int i = 0; i <= 8; i += 2)
        {
            if (freq[i] > 0)
            {
                ans.push_back(num * 10 + i);
            }
        }
    }
}

vector<int> findEvenNumbers(vector<int> &digits)
{
    // creating a vector of size 10 and idx start from 0;
    vector<int> freq(10, 0);

    // counting the frequency of each digit in array
    for (int i = 0; i < digits.size(); i++)
    {
        int d = digits[i];
        freq[d]++;
    }

    vector<int> ans;
    build(0, 0, freq, ans);
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> digits = {2, 1, 3, 0};
    vector<int> result = findEvenNumbers(digits);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    cout << endl;
}