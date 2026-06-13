class Solution {
public:
    string mapWordWeights(vector<string>& word, vector<int>& weights) {
        int n=word.size();
        int m=weights.size();
        string s;
        for(int i=0;i<n;i++)
            {
                int sum=0;
                for(int j=0;j<word[i].size();j++)
                    {
                        sum=sum+weights[word[i][j]-'a'];
                    }
                int r=26-sum%26-1+'a';
                s.push_back(static_cast<char>(r));
            }
        return s;
          
        
        
    }
};