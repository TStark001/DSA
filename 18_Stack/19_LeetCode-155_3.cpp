/*
#   LeetCode-155 :- Min Stack(Interview)
    Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

    Implement the MinStack class:

    MinStack() initializes the stack object.
    void push(int val) pushes the element val onto the stack.
    void pop() removes the element on the top of the stack.
    int top() gets the top element of the stack.
    int getMin() retrieves the minimum element in the stack.
    You must implement a solution with O(1) time complexity for each function.

    Example 1:
    Input
    ["MinStack","push","push","push","getMin","pop","top","getMin"]
    [[],[-2],[0],[-3],[],[],[],[]]

    Output
    [null,null,null,null,-3,null,0,-2]
    Explanation
    MinStack minStack = new MinStack();
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    minStack.getMin(); // return -3
    minStack.pop();
    minStack.top();    // return 0
    minStack.getMin(); // return -2
*/
#include <iostream>
#include <stack>
#include <vector>
#include <climits>
using namespace std;

class MinStack
{
private:
    stack<long long> st;
    long long min;

public:
    MinStack()
    {
        min = INT_MAX;
    }

    void push(int val)
    {
        long long x = (long long)val;
        if (st.size() == 0)
        {
            st.push(x);
            min = x;
        }
        else if (x >= min)
            st.push(x);
        else
        { // val < min
            st.push(2 * x - min);
            min = x;
        }
    }

    void pop()
    {
        if (st.top() < min)
        { // A fake value is present
            // before popping make sure to retrieve the old min
            long long oldMin = 2 * min - st.top();
            min = oldMin;
        }
        st.pop();
    }

    int top()
    {
        if (st.top() < min)
            return (int)min;
        else
            return (int)st.top();
    }

    int getMin()
    {
        return (int)min;
    }
};

int main()
{
    MinStack ms;

    ms.push(5);
    ms.push(2);
    ms.push(4);

    cout << "Top: " << ms.top() << endl;
    cout << "Minimum: " << ms.getMin() << endl;

    ms.pop();

    cout << "Top after pop: " << ms.top() << endl;
    cout << "Minimum after pop: " << ms.getMin() << endl;

    return 0;
}
