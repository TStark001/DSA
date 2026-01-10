/*
!                    SORTING THE SENTENCE
A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of lowercase and uppercase English letters.

A sentence can be shuffled by appending the 1-indexed word position to each word then rearranging the words in the sentence.

For example, the sentence "This is a sentence" can be shuffled as "sentence4 a3 is2 This1" or "is2 sentence4 This1 a3".
Given a shuffled sentence s containing no more than 9 words, reconstruct and return the original sentence.

Example 1:
    Input: s = "is2 sentence4 This1 a3"
    Output: "This is a sentence"
    Explanation: Sort the words in s to their original positions "This1 is2 a3 sentence4",
                    then remove the numbers.
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s = "is2 sentence4 This1 a3";
    vector<string> ans(10);
    string temp;
    int count = 0, index = 0;
    while (index < s.size())
    {
        if (s[index] == ' ')
        {
            int pos = temp[temp.size() - 1] - '0';
            temp.pop_back();
            ans[pos] = temp;
            temp.clear();
            count++;
        }
        else
        {
            temp += s[index];
        }
        index++;
    }
    int pos = temp[temp.size() - 1] - '0';
    temp.pop_back();
    ans[pos] = temp; 
    temp.clear();
    count++;

    for (int i = 1; i <= count; i++)
    {
        temp += ans[i];
        temp += ' ';
    }
    temp.pop_back();
    cout << temp;
}