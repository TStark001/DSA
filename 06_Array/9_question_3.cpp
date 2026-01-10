/*
        Find the last occurrence of an element x in given vector.
                        n=1
                    [1,2,3,2,1,3,1]
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(6);

    for (int i = 0; i < 6; i++)
    {
        cin >> v[i];
    }

    int x;
    cout << "Enter x:";
    cin >> x;

    int occurence = -1;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
        {
            occurence = i;
        }
    }
    cout << occurence << endl;

    return 0;
}