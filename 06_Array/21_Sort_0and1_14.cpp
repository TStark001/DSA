/*
!                               Pattern:-Two pointer
                    Sort an array consisting of only 0's and 1's.
todo                            (FIRST METHOD)
*/
#include <iostream>
#include <vector>
using namespace std;

void sortZeroesandOnes(vector<int> &v)
{
    int zeroes_count = 0;

    // counting zeroes present in vector
    for (int ele : v) // for each loop
    {
        if (ele == 0)
        {
            zeroes_count++;
        }
    }

    // this loops arrange zeroes and ones in a vector.
    for (int i = 0; i < v.size(); i++)
    {
        if (i < zeroes_count)
        {
            v[i] = 0;
        }
        else
        {
            v[i] = 1;
        }
    }
}

int main()
{
    int n; // size of vector
    cout << "Enter Size of vector = ";
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++) // this loop help us to add element in the vector
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    // calling the function
    sortZeroesandOnes(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}