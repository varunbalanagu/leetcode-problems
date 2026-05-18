class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<int>st;
        int n=s.size();
        
        int l=0;
        int m=0;
        for(int r=0;r<n;r++)
        {
            while(st.find(s[r])!=st.end())
            {
                st.erase(s[l]);
                l++;
            }
             m=max(m,(r-l+1));
            st.insert(s[r]);
           
        }
        return m;
    
        
    }
};