/*
        !    Search if the given element is presents in the array or not.
        !    if it is not present then return -1 else return the index.
*/
#include <iostream>
using namespace std;

int main()
{
    int array[] = {5, 8, 2, 45, 8};
    int n;
    int ans = -1;
    cout << "Enter the value of n= ";
    cin >> n;

    for (int i = 0; i < 5; i++)
    {
        if (array[i] == n)
        {
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}
