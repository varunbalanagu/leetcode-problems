class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.size();
        vector<vector<bool>>dp(n,vector<bool>(n,false));
         unordered_set<string> st(wordDict.begin(), wordDict.end());
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j+i-1<n;j++)
            {
                int K=j+i-1;
                string temp=s.substr(j,i);
                if(st.count(temp))
                {
                    dp[j][K]=true;
                    continue;
                }
                for(int k=j;k<K;k++)
                {
                  if(dp[j][k] && dp[k+1][K])
                    {
                        dp[j][K] = true;
                        break;
                    }
                }
            }
        }
        return dp[0][n-1];
        
    }
};