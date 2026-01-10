// create stack using vector
#include <iostream>
#include <vector>
using namespace std;

class Stack
{
public:
    vector<int> v;
    Stack() {}
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        if (v.size() == 0)
        {
            cout << "Stack is Empty!" << endl;
            return;
        }
        v.pop_back();
    }
    int top()
    {
        if (v.size() == 0)
        {
            cout << "Stack is Empty!" << endl;
            return -1;
        }
        return v[v.size() - 1];
    }
    int size()
    {
        return v.size();
    }
};

int main()
{
    Stack st;
    cout << st.top() << endl; // stack is empty
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60); // ya push nahi hoga
    cout << st.top() << endl;
    cout << "Size :- " << st.size() << endl;
    st.pop();
    cout << st.top() << endl;
    cout << "Size :- " << st.size() << endl;
}