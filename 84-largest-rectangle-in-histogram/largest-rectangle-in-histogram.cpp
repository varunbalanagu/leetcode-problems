class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int nse =0,pse=0;
        int m =-1;
        stack<int>st;
        for(int i =0 ;i < n ;i++){
            while(!st.empty() && heights[st.top()] > heights[i]){
                  int element=st.top();
                  st.pop();
                  nse = i ,pse=st.empty()? -1:st.top();
                  m = max(m,abs(nse -pse-1)*heights[element]);
            }
            st.push(i);
        }
        while(!st.empty()){
            nse =n; 
           int  element=st.top();
            st.pop();
            pse = st.empty() ? -1:st.top();
            m=max(m,heights[element]*(nse-pse-1));
        }
        return m;
        
    }
};