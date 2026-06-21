class Solution {
public:
     vector<int>dp;
     bool isPalindrome(string &s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
    int expansion(string s,int start)
    {
        if(start==s.size())
        {
            return -1;
        }
        if(dp[start]!=-1)
        {
            return dp[start];
        }
        int mi=INT_MAX;
        for(int centre=start;centre<s.size();centre++)
        {
           if (isPalindrome(s, start, centre)) {
              mi = min(mi, 1 + expansion(s, centre + 1));
            }
        }
        return dp[start]=mi;
      
        
    }
    int minCut(string s) {
        int n=s.size();
        dp.resize(s.size(),-1);
           return  expansion(s,0);
          
            }
        
        
    
};