class MyQueue {
    stack<int> st;
public:
    MyQueue() {
    }
    
    void push(int x) {
        stack<int> auxS;
        int s = st.size();
        for(int i = 0; i<s;i++){
            auxS.push(st.top());
            st.pop();
        }
        st.push(x);
        for(int i =0;i<s;i++){
            st.push(auxS.top());
            auxS.pop();
        }
    }
    
    int pop() {
        int ans = st.top();
        st.pop();
        return ans;
    }
    
    int peek() {
        return st.top();
    }
    
    bool empty() {
        return st.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */