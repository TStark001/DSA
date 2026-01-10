#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;
    cout << "Size :- " << st.size() << endl; // size = 0
    st.push(10);                             // 10
    st.push(20);                             // 20
    st.push(30);                             // 30
    st.push(40);                             // 40
    st.push(50);                             // 50
    cout << "Size :- " << st.size() << endl; // size = 5
    st.pop();                                // remove 50 from top
    cout << "Size :- " << st.size() << endl; // size = 4
    cout << "Top :- " << st.top() << endl;   // Display top element , Top = 40
    st.push(50);


    /* // printing int reverse order ---> but stack become empty
    cout << "Stack :- ";
    while (st.size() > 0)
    {
        cout << st.top() << " ";
        st.pop();
    } */


    // we will use extra stack to store original value of stacks
    stack<int> temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    // putting element back from temp to stack
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}