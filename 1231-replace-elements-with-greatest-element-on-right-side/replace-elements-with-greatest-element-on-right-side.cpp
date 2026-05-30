class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size(),m;
        vector<int> ans(n,-1);
        for(int i=0;i<n;i++)
        {
            m=-1;
            for(int j=i+1;j<n;j++){
                m=max(m,arr[j]);
            }
            ans[i]=m;
        }
        return ans;
    }
};