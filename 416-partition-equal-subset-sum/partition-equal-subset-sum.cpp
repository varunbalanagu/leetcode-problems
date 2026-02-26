class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        
        for(int i=0;i<n;i++)
        {
          sum=sum+nums[i];
        }
         vector<vector<bool>>dp(n,vector<bool>(sum+1));
        dp[0][nums[0]]=true;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<=sum;j++)
            {
                if(dp[i-1][j]==true)
                {
                  dp[i][j]=true;
                  dp[i][j+nums[i]]=true;
                }
            }
        }
        if(sum%2==1) return false;
        return dp[n-1][sum/2];
    }
};