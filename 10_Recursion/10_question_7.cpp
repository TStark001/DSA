/*
?   Palindrome :- if we read a string from left to right or right to left the pronouncation will same.
?           Ex :- NITIN
!   Write a program to check wheather a given number is palindrome or not.
*/
#include <iostream>
using namespace std;

bool f(int num, int *temp)
{
    // base case
    if (num >= 0 and num <= 9)
    {
        int lastDigitofTemp = (*temp) / 10;
        (*temp) /= 10;
        return (num = lastDigitofTemp);
    }
    bool result = (f(num / 10, temp) and (num % 10) == ((*temp) % 10));
    (*temp) /= 10;
    return result;
}

int main()
{
    int num;
    cin >> num;
    int anotherNum = num;
    int *temp = &anotherNum;
    cout << f(num, temp);
    return 0;
}