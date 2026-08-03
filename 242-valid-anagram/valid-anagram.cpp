class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m =t.size();
        map<char,int>mp;
        map<char,int>mp2;
        for(int i =0 ;i < n ;i++){
            mp[s[i]]++;
        }
        for(int i =0 ;i <m ;i++){
            mp2[t[i]]++;
        }
        for(char c='a';c<='z';c++){
            if(mp[c]!=mp2[c]) return false;
        }
        return true;
        
    }
};