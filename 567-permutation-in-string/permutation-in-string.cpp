class Solution {
public:
   bool peremate(string ans,string s2){
    sort(ans.begin(),ans.end());
    sort(s2.begin(),s2.end());
    return ans==s2;
   }
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m =s2.size();
        if(s1.size()>s2.size()) return false;
        string ans="";
        for(int i =0;i<n;i++){
            ans+=s2[i];
        }
        if(peremate(ans,s1)) return true;
        for(int i =n;i < m;i++){
            ans.erase(ans.begin());
            ans+=s2[i];
             if(peremate(ans,s1)) return true;

        }
        return false;
    }
};