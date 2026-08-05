class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        vector<vector<string>>prefix;
        string str="";
        string m ="";
        for(int i =0;i< strs[0].size();i++){
             str= str+strs[0][i];
             cout<<str<<endl;
             int c=0;
             for(int j =0;j<strs.size();j++){
                if(strs[j].starts_with(str)){
                    c++;
                }
             }
             if(c==strs.size()){
                m=max(m,str);
             }
        }
        return m;
    }
};