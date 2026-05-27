class Solution {
public:
    int numberOfSpecialChars(string word) {
        map<char,int>mp;
        int n=word.size();
        for(int i=0;i<n;i++)
        {
            if(word[i]>='a'&&word[i]<='z')
            {
                mp[word[i]]=i;
            }
            else
            {
                 if(mp.find(word[i])==mp.end())
                {
                    mp[word[i]] = i;
                }
                // mp[word[i]]=i;
            }
        }
        int count=0;
        for(char c='a';c<='z';c++)
        {
              char up = c-32;

            if(mp.find(c)!=mp.end() && mp.find(up)!=mp.end())
            {
                if(mp[c] < mp[up])
                {
                    count++;
                }
            }
        }
        return count;
        
    }
};