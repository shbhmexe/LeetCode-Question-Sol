#include <stack>
using namespace std;

class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;

    MyQueue() {
        // Constructor
    }

    void push(int x) {
        // Move all elements from s1 to s2
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        // Push new element into s1
        s1.push(x);

        // Move everything back to s1
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int pop() {
        if (!s1.empty()) {
            int ans = s1.top();
            s1.pop(); // ❗ fixed: changed s1.top() to s1.pop();
            return ans;
        }
        return -1; // or throw an exception if queue is empty
    }

    int peek() {
        if (!s1.empty()) {
            return s1.top();
        }
        return -1; // or throw an exception if queue is empty
    }

    bool empty() {
        return s1.empty();
    }
};
