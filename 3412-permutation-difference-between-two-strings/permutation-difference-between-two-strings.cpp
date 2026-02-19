class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int n=s.size();
        map<char,int>mp;
        map<char,int>mp2;
        int m=t.size();
        for(int i=0;i<n;i++)
        {
            mp[s[i]]=i;
        }
        for(int i=0;i<m;i++)
        {
            mp2[t[i]]=i;
        }
        int sum=0;
        for(char c='a';c<='z';c++)
        {
            sum=sum+abs(mp[c]-mp2[c]);
        }
        return sum;
        
    }
};