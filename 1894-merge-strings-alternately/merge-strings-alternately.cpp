class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        string s;
        int c=0;
        int i=0,j=0;
        while(i<n&&j<m)
        {
            if(c%2==0)
            {
            s.push_back(word1[i]);
            i++;
            }
            else
            {
                 s.push_back(word2[j]);
                 j++;
            }
            c++;
        }
        while(i<n)
        {
            s.push_back(word1[i]);
            i++;
        }
        while(j<m)
        {
            s.push_back(word2[j]);
            j++;
        }
        return s;
        
    }
};