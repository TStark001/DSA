#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    // push operations
    dq.push_back(10);   // add at back
    dq.push_back(20);
    dq.push_front(5);   // add at front
    dq.push_front(1);

    // display deque
    cout << "Deque elements: ";
    for (int x : dq) {
        cout << x << " ";
    }
    cout << endl;

    // pop operations
    dq.pop_front();  // remove from front
    dq.pop_back();   // remove from back

    // display after pop
    cout << "After pop operations: ";
    for (int x : dq) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
