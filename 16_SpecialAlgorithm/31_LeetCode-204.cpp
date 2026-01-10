/*
#   LeetCode-204 :- Count Prime
    Given an integer n, return the number of prime numbers that are strictly less than n.

    Example 1:
    Input: n = 10
    Output: 4
    Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.

    Example 2:
    Input: n = 0
    Output: 0

    Example 3:
    Input: n = 1
    Output: 0
*/
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void fillSieve(vector<bool> &sieve)
{
    int n = sieve.size() - 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        for (int j = i * 2; j <= n; j += i)
        {
            sieve[j] = 0;
        }
    }
}
int countPrimes(int n)
{
    if (n <= 2)
        return 0;
    n = n - 1;
    int count = 0;
    vector<bool> sieve(n + 1, 1); // 1 mean prime , 0 mean not prime
    fillSieve(sieve);
    sieve[0] = 0;
    sieve[0] = 0;
    for (int i = 2; i <= n; i++)
    {
        if (sieve[i] == 1)
            count++;
    }
    return count;
}

int main()
{
    int n = 10;
    cout<<countPrimes(n);
}