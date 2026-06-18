class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>prefix(n,0);
        vector<int>suffix(n);
        // prefix[0]=nums[0];
        suffix[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            suffix[i]=min(suffix[i+1],nums[i]);
        }
        int m=0;
        for(int i=0;i<n;i++)
        {
           m=max(m,nums[i]);
           int diff=abs(m-suffix[i]);
           if(diff<=k)
           {
            return i;
           }

        }
        return -1;


    }
};