class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        int n = s.size();
        unordered_map<string,string>mp;
        unordered_map<string,string>mp2;
        for(int i =0 ; i < knowledge.size() ; i++){
            mp[knowledge[i][0]]=knowledge[i][1];
        }
        string res="",str="";
        for(int i =0 ; i < n ; i++){
            if(s[i]=='('){
                int temp =i+1;
                str="";
                while(temp < n &&s[temp]!=')'){
                    str+=s[temp];
                    temp++;
                }
                if(mp.find(str)!=mp.end())
                 res+=mp[str];
                else{
                   res+='?';
                }
                i=temp;
            }
            else{
                res+=s[i];
            }
            
        }
        return res;
      
    }
};