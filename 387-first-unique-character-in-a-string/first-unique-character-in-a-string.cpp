class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>ans;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            ans[s[i]]++;
        }
        for(int j=0;j<n;j++)
        {
            if(ans[s[j]]==1)
            {
                return j;
            }
        }
        return -1;
        
    }
};