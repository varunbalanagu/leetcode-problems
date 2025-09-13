class Solution {
public:
    int maxFreqSum(string s) {
        int n=s.size();
        map<char,int>mp;
        map<char,int>mp2;
        int max1=0,max2=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                mp[s[i]]++;
                max1=max(max1,mp[s[i]]);
            }
            else
            {
                mp2[s[i]]++;
                max2=max(max2,mp2[s[i]]);
            }
        }
        return max1+max2;
        
    }
};