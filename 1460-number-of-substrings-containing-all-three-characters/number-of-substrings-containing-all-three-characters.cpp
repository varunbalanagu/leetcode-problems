class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        int a=0,b=0,c=0;
        int st=0,ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a')
            a++;
            if(s[i]=='b')
            b++;
            if(s[i]=='c')
            c++;
            if(a>0&&b>0&&c>0)
            ans+=n-i;
            while(a>0&&b>0&&c>0)
            {
                if(s[st]=='a')
                a--;
                if(s[st]=='b')
                b--;
                if(s[st]=='c')
                c--;
                st++;
                if(a>0&&b>0&&c>0)
                ans+=n-i;
                else
                break;
            }
        }
        return ans;
    }
};