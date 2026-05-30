class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);

        stack<int> st;
        st.push(-1);   // for the last element

        for(int i = n - 1; i >= 0; i--) {
            ans[i] = st.top();

            if(st.top() < arr[i]) {
                st.push(arr[i]);
            }
        }

        return ans;
    }
};