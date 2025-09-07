class MinStack { // implementing it using stack encoding
private:
    stack<long long> st;
    long long currMin;

public:
    MinStack() {}

    void push(int val) {
        if (st.empty()) {
            currMin = val;
            st.push(val);
        } else if (val >= currMin)
            st.push(val);
        else {
            long long markerVal = ((long long)2 * val) - currMin;
            st.push(markerVal);
            currMin = val;
        }
    }

    void pop() {
        long long tp = st.top();
        st.pop();
        if (tp >= currMin)
            return;
        if (tp < currMin) {
            currMin = (long long)2 * currMin - tp;
        }
    }

    int top() {
        long long tp = st.top();
        if (tp >= currMin)
            return tp;
        else
            return currMin;
    }

    int getMin() { return currMin; }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */