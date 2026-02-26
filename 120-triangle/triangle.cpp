class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,0));
        if(n<=1) return triangle[0][0];
        dp[0][0]=triangle[0][0];
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<triangle[i].size();j++)
            {
                 if(j==0)
                 {
                    dp[i][j]=dp[i-1][j]+triangle[i][j];
                 }
                 else if(j==triangle[i].size()-1)
                 {
                    dp[i][j]=dp[i-1][j-1]+triangle[i][j];
                 }
                 else
                 {
                 dp[i][j]=min(dp[i-1][j]+triangle[i][j],dp[i-1][j-1]+triangle[i][j]);
                 }
                
            }

        }
        int m=INT_MAX;
        for(int j=0;j<triangle[n-1].size();j++)
        {
            m=min(m,dp[n-1][j]);
        }
        return m;

        
    }
};