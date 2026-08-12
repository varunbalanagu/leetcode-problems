class Solution {
public:
    void identify(int open ,int closed,string s,vector<string>&ans,int n){
           if(open==n&&closed==n){
            ans.push_back(s);
            return;
           }
           if(open<n){
            identify(open+1,closed,s+'(',ans,n);
           }
           if(closed<open){
            identify(open,closed+1,s+')',ans,n);
           }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        int open =0,closed=0;
        identify(open,closed,"",ans,n);
        return ans;
    }
};