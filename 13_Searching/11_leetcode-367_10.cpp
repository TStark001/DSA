/*
# LeetCode-367 :- Valid Perfect Square
    Given a positive integer num, return true if num is a perfect square or false otherwise.
    A perfect square is an integer that is the square of an integer. In other words, it is the product of some integer with itself.
    You must not use any built-in library function, such as sqrt.

    Example 1:
    Input: num = 16
    Output: true
    Explanation: We return true because 4 * 4 = 16 and 4 is an integer.

    Example 2:
    Input: num = 14
    Output: false
    Explanation: We return false because 3.742 * 3.742 = 14 and 3.742 is not an integer.
*/
#include <iostream>
using namespace std;
bool validPerfectSqaure(int x)
{
    int lo = 1;
    int hi = x;
    while (lo <= hi)
    {
        long long mid = lo + (hi - lo) / 2;
        if ((long long)mid * mid == x)
        {
            return true;
        }
        else if ((long long)mid * mid < x)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    return false;
}
int main()
{
    int x = 25;
    cout << validPerfectSqaure(x);
    return 0;
}