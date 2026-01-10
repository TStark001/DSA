/*
#   LeetCode-2507 :- Smallest value after replacing with sum of Prime factor
    You are given a positive integer n.
    Continuously replace n with the sum of its prime factors.
    Note that if a prime factor divides n multiple times, it should be included in the sum as many times as it divides n.
    Return the smallest value n will take on.

    Example 1:
    Input: n = 15
    Output: 5
    Explanation: Initially, n = 15.
    15 = 3 * 5, so replace n with 3 + 5 = 8.
    8 = 2 * 2 * 2, so replace n with 2 + 2 + 2 = 6.
    6 = 2 * 3, so replace n with 2 + 3 = 5.
    5 is the smallest value n will take on.

    Example 2:
    Input: n = 3
    Output: 3
    Explanation: Initially, n = 3.
    3 is the smallest value n will take on.
*/
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int smallestValue(int n)
{
    if (isPrime(n))
        return n;
    int sum = 0;
    for (int i = 1; i < sqrt(n); i++)
    {
        if (n % i == 0 and isPrime(i))
        {
            int m = n;
            while (m % i == 0)
            {
                sum += i;
                m /= i;
            }
        }
    }
    for (int i = sqrt(n); i >= 1; i--)
    {
        if (n % i == 0 and isPrime(n / i))
        {
            int m = n;
            while (m % (n / i) == 0)
            {
                sum += (n / i);
                m /= (n / i);
            }
        }
    }
    if (sum == n)
        return n;
    return smallestValue(sum);
}

int main()
{
    int n = 15;
    cout << smallestValue(n);
}