/*
!   ZigZag Patter
    Input       Output
    1           111
    2           211121112
    3           321112111232111211123
    4           432111211123211121112343211121112321112111234
*/
#include <iostream>
using namespace std;

void zigzag(int n)
{
    if (n == 0)
        return;
    cout << n;
    zigzag(n - 1);
    cout << n;
    zigzag(n - 1);
    cout << n;
}

int main()
{
    zigzag(3);
    return 0;
}