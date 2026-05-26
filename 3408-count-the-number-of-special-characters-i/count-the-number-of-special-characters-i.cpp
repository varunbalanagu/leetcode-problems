class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n=word.size();
        map<char,int>mp;
        for(int i=0;i<n;i++)
        {
          mp[word[i]]++;
        }
        int count=0;
        for(auto &it:mp)
        {
            char ch=it.first;
            if(mp[ch]&&mp[ch-32])
            {
                count++;
            }
        }
        return count;
        
    }
};