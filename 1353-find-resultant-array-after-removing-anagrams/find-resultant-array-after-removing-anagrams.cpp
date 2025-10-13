class Solution {
public:
   bool anagram(string s,string n)
   {
     if (s.size() != n.size()) return false;

    map<char,int> mp1;
    map<char,int>mp2;
    for (char c : s) mp1[c]++;
    for (char c : n) mp2[c]++;

    return mp1 == mp2;
   }
    vector<string> removeAnagrams(vector<string>& words) {
        int n=words.size();
        vector<string>ans;
        int i=1;
        while(i<words.size())
        {
            if(anagram(words[i-1],words[i]))
            {
                 words.erase(words.begin() + i);
            }
            else
            {
                i++;
            }
        }
        return words;
    }
};