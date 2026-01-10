#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    // for loop
    for (int i = 0; i < 5; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    v.insert(v.begin() + 2, 7); // * this will add element to the vector.

    // for each loop
    for (int ele : v)
    {
        cout << ele << " ";
    }
    cout << endl;

    v.erase(v.end() - 2); // ! this will delete element from the end of the vector.

    // while loop
    int idx = 0;
    while (idx < v.size())
    {
        cout << v[idx++] << " "; // not clear!
    }

    return 0;
}