// Queue Using Stack

class MyQueue {
    // Queue Using Stack
public:
    /** Initialize your data structure here. */
    stack<int> queueStack;
    stack<int> temp;

    MyQueue() {
        while (!queueStack.empty()) queueStack.pop();
        while (!temp.empty()) temp.pop();
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        while (!temp.empty()) temp.pop();
        while (!queueStack.empty()) {
            int element = queueStack.top();
            temp.push(element);
            queueStack.pop();
        }
        queueStack.push(x);
        while (!temp.empty()) {
            int element = temp.top();
            queueStack.push(element);
            temp.pop();
        }
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int element = queueStack.top();
        queueStack.pop();
        return element;
    }
    
    /** Get the front element. */
    int peek() {
        int element = queueStack.top();
        return element;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return queueStack.empty();
    }
};
