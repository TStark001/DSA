/*
#   LeetCode-232 :- Implement Queue using stacks
    Implement a first in first out (FIFO) queue using only two stacks. The implemented queue should support all the functions of a normal queue (push, peek, pop, and empty).

    Implement the MyQueue class:

    void push(int x) Pushes element x to the back of the queue.
    int pop() Removes the element from the front of the queue and returns it.
    int peek() Returns the element at the front of the queue.
    boolean empty() Returns true if the queue is empty, false otherwise.
    Notes:

    You must use only standard operations of a stack, which means only push to top, peek/pop from top, size, and is empty operations are valid.
    Depending on your language, the stack may not be supported natively. You may simulate a stack using a list or deque (double-ended queue) as long as you use only a stack's standard operations.
    
    Example 1:
    Input
    ["MyQueue", "push", "push", "peek", "pop", "empty"]
    [[], [1], [2], [], [], []]
    Output
    [null, null, null, 1, 1, false]

    Explanation
    MyQueue myQueue = new MyQueue();
    myQueue.push(1); // queue is: [1]
    myQueue.push(2); // queue is: [1, 2] (leftmost is front of the queue)
    myQueue.peek(); // return 1
    myQueue.pop(); // return 1, queue is [2]
    myQueue.empty(); // return false
!                                   Method-2 :- Pop Efficient Approach
*/
#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class MyQueue {
public:
    stack<int> st;
    stack<int> helper;
    MyQueue() {}
    
    void push(int x) { // O(n)
        // push at bottom
        if(st.size() == 0){
            st.push(x);
            return;
        }
        else{
            while(st.size()>0){
                helper.push(st.top());
                st.pop();
            }
            st.push(x);
            while(helper.size()>0){
                st.push(helper.top());
                helper.pop();
            }
        }
    }
    
    int pop() { // O(1) 
        int x = st.top();
        st.pop();
        return x;
    }
    
    int peek() { // front element of queue  O(1)
        return st.top();
    }
    
    bool empty() {
        if(st.size() == 0) return true;
        else return false;
    }
};

int main(){
    MyQueue q;

    cout << "Pushing elements:- 10 20 30" << endl;
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element (peek): " << q.peek() << endl;   // 10
    cout << "Pop: " << q.pop() << endl;                     // 10
    cout << "Front element (peek): " << q.peek() << endl;   // 20
    cout << "Pop: " << q.pop() << endl;                     // 20
    cout << "Pop: " << q.pop() << endl;                     // 30

    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl;

    return 0;
}