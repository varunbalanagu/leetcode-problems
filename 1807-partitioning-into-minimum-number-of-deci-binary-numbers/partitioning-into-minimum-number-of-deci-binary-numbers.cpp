class Solution {
public:
    int minPartitions(string s) {
       int c=0;
       int n=s.size();
       int m=-1;
       for(int i=0;i<n;i++)
       {
         m=max(m,s[i]-'0');
       }
       return m;
        
    }
};