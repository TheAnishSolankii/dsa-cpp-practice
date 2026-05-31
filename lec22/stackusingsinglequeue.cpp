#include <iostream>
#include <queue>
using namespace std;

class Stack {
    queue<int> q;

public:
    // Push element
    void push(int x) {
        q.push(x);

        // Rotate previous elements behind the new one
        int size = q.size();
        for (int i = 0; i < size - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    // Remove top element
    void pop() {
        if (q.empty()) {
            cout << "Stack is empty\n";
            return;
        }
        q.pop();
    }

    // Get top element
    int top() {
        if (q.empty()) return -1;
        return q.front();
    }

    // Check empty
    bool empty() {
        return q.empty();
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.top() << endl; // 30

    s.pop();
    cout << s.top() << endl; // 20
}