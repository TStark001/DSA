/*
        count the number of occurrence of particular element x.
                * is program ma check kar raha raha ha ki ek particular number sa kitna number bara
                *       present ha vector ma.
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(6);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    cout << "Enter x:-";
    int x;
    cin >> x;

    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > x)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}