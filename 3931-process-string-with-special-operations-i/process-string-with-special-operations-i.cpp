class Solution {
public:
    string processStr(string s) {
        string res;
        for(int i=0;i<s.size();i++)
        {
            if(res.size()>0&&s[i]=='*')
            {
                res.pop_back();
            }
            else if(s[i]=='#')
            {
                res+=res;
            }
            else if(res.size()>0&&s[i]=='%')
            {
                reverse(res.begin(),res.end());
            }
            else if(s[i]>='a'&&s[i]<='z')
            {
                res.push_back(s[i]);
            }
        }
        return res;
        
    }
};