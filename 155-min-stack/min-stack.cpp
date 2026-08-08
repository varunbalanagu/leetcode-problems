class MinStack {
public:
   int m=INT_MAX;
   vector<vector<int>>st;
    MinStack() {

        
    }
    
    void push(int value) {
        m=min(m,value);
        st.push_back({value,m});
    }
    
    void pop() {
        int n=st.size();
        st.erase(st.begin()+n-1);
        if(st.empty())
        {
            m=INT_MAX;
        }
        
        else
        {
             n=st.size();
            m=st[n-1][1];
        }
        
    }
    
    int top() {
       return st[st.size()-1][0];
        
    }
    
    int getMin() {
        int n=st.size();
        return st[n-1][1];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */