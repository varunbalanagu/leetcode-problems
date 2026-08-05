class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       int n = strs.size();
       map<string,vector<string>>mp;
       for(int i =0;i<n;i++){
        string str=strs[i];
        sort(str.begin(),str.end());
        mp[str].push_back(strs[i]);
       }
       vector<vector<string>>ans;
       for(auto & it:mp){
        // cout<<it[0]<<endl;
        vector<string>sol;
          for(int i =0;i<it.second.size();i++){
             sol.push_back(it.second[i]);
          }
          ans.push_back(sol);
       }
       return ans;   
    }
};