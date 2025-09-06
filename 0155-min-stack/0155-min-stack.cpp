class MinStack {
    stack<int>minVal;
    stack<int> minStack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(minStack.empty() || val<=minVal.top()) minVal.push(val);
        minStack.push(val);        
    }
    
    void pop() {
       if(minStack.empty()) return;
       if(minStack.top() == minVal.top()){
        minStack.pop();
        minVal.pop();
       }
       else{
        minStack.pop();
       }
    }
    
    int top() {
        return minStack.top();
    }
    
    int getMin() {
        return minVal.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */