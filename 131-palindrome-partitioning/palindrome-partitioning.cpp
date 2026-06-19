class Solution {
public:
    bool palidrome(string res)
    {
        for(int i=0;i<res.size()/2;i++)
        {
            if(res[i]!=res[res.size()-i-1])
            {
                return false;
            }
        }
        return true;

    }
    void identify(string s,int n ,vector<vector<string>>&ans,int i, vector<string>&res)
    {
        if(i==n)
        {
            ans.push_back(res);
            return ;
        }
        for(int j=i;j<n;j++)
        {
            string curr=s.substr(i,j-i+1);
            if(palidrome(curr)){
           
             res.push_back(curr);
             identify(s,n,ans,j+1,res);
             res.pop_back();
            }
        }

    }
    vector<vector<string>> partition(string s) {
        int n=s.size();
        vector<vector<string>>ans;
        vector<string>res;
        identify(s,n,ans,0,res);
        return ans;
        
    }
};