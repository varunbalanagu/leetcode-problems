class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        int m=-1;
        int mi=10000;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
            m=max(m,nums[i]);
            mi=min(mi,nums[i]);
        }
        vector<int>dp(m+1,0);
        dp[mi]=mp[mi]*mi;
        for(int i=mi+1;i<=m;i++)
        {
            dp[i]=max(mp[i]*i+dp[i-2],dp[i-1]);
        }
        return dp[m];
        
    }
};