// push  at idx iterative
#include <iostream>
#include <stack>
using namespace std;

// display stack in reverse order
void displayRev(stack<int> &st)
{
    if (st.size() == 0)
        return;
    int x = st.top();
    cout << x << " ";
    st.pop();
    displayRev(st);
    st.push(x);
}
// display stack in normal order
void display(stack<int> &st)
{
    if (st.size() == 0)
        return;
    int x = st.top();
    st.pop();
    display(st);
    cout << x << " ";
    st.push(x);
}

int main()
{
    stack<int> st;
    st.push(10); // 10
    st.push(20); // 20
    st.push(30); // 30
    st.push(40); // 40
    st.push(50); // 50
    display(st);
    cout << endl;
    displayRev(st);
}