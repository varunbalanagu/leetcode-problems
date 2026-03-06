class Solution {
public:
    bool checkOnesSegment(string s) {
        int n=s.size();
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1'&&flag)
            return false;
            else if(s[i]=='0')
            flag=true;
        }
        return true;
        
    }
};