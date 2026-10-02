class Solution {
public:
    void check(int n , int open , int close ,string st,vector<string>&str){
        if(open ==n&&close==n){
           str.push_back(st);
           return;
        }
        if(open < n)
        check(n , open+1 , close , st+'(',str);
        if(close<open)
        check(n,open,close+1,st+')',str);
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string>sol;
        int open =0 , close=0;
        // char ch='';
        vector<string>str;
        string st="";
         check(n , open , close, "",str);
         return str;
    }
};