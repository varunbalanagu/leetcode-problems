class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans(n);
        int m=-1;
        for(int i=n-1;i>=0;i--)
        {
            int curr=arr[i];
           arr[i]=m;
           m=max(m,curr);
        }
        return arr;
        
    }
};