/*
    Given an array of digits(value are from 0to9), the task is to find the minimum possible
    sum of two numbers formed from digit of the array. Please note that all digits of the given
    array must be used to form two number.
*/
#include <iostream>
#include <algorithm>
using namespace std;
int minsum(int arr[], int n)
{
    sort(arr, arr + n);
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < n ; i++)
    {
        if (i % 2 == 0)
        {
            sum1 = arr[i];
        }
        else
        {
            sum2 = arr[i];
        }
    }
    return sum1 + sum2;
}
int main()
{
    int arr[] = {9, 1, 6, 4, 2, 7};
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    sort(arr, arr + n);
    cout << "After Sorting:-" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl<< "Minimum Sum = " << minsum(arr, n);
}
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// // Function to find minimum sum of two numbers formed from array digits
// int minSum(vector<int>& digits) {
//     sort(digits.begin(), digits.end());

//     string num1 = "", num2 = "";

//     // Distribute digits alternately to num1 and num2
//     for (int i = 0; i < digits.size(); i++) {
//         if (i % 2 == 0)
//             num1 += to_string(digits[i]);
//         else
//             num2 += to_string(digits[i]);
//     }

//     // Convert strings to integers
//     int n1 = stoi(num1);
//     int n2 = stoi(num2);

//     return n1 + n2;
// }

// int main() {
//     vector<int> arr = {6, 8, 4, 5, 2, 3};
//     cout << "Minimum sum = " << minSum(arr) << endl;
//     return 0;
// }
