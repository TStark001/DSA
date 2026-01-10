// push  at bottom
#include <iostream>
#include <stack>
using namespace std;

void print(stack<int> &st)
{
    stack<int> temp;
    while (st.size() > 0)
    {
        temp.push(st.top());
        st.pop();
    }
    // putting element back from temp to stack
    while (temp.size() > 0)
    {
        cout << temp.top() << " ";
        st.push(temp.top());
        temp.pop();
    }
    cout << endl;
}
// using iteration
void pushAtBottom(stack<int> &st, int val)
{
    stack<int> temp;
    while (st.size() > 0)
    {
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while (temp.size() > 0)
    {
        st.push(temp.top());
        temp.pop();
    }
}
// using recursion
void pushAtBottomRec(stack<int> &st, int val)
{
    if (st.size() == 0)
    {
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    pushAtBottomRec(st, val);
    st.push(x);
}
void reverse(stack<int> &st)
{
    if (st.size() == 1)
        return;
    int x = st.top();
    st.pop();
    reverse(st);
    pushAtBottomRec(st, x);
}

int main()
{
    stack<int> st;
    st.push(10); // 10
    st.push(20); // 20
    st.push(30); // 30
    st.push(40); // 40
    st.push(50); // 50
    print(st);
    /*
     pushAtBottom(st, 80);
     print(st);
     pushAtBottomRec(st, 90);
     print(st);
    */
    reverse(st);
    print(st);
}