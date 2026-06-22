class Solution {
public:
    int maxNumberOfBalloons(string text){
        int m=text.size();
        string check="balloon";
        map<char,int>mp;
        int b=INT_MAX,a=INT_MAX,l=INT_MAX,o=INT_MAX,n=INT_MAX;
        for(int i=0;i<m;i++)
        {
            // mp[text[i]]++;
            if(text[i]=='b')
            {
                mp[text[i]]++;
                b=min(b,mp[text[i]]);
            }
            else if(text[i]=='a')
            {
               mp[text[i]]++;
               a=min(a,mp[text[i]]);
            }
            else if(text[i]=='l')
            {
                mp[text[i]]++;
                l=min(l,mp[text[i]]);
            }
            else if(text[i]=='o')
            {
                  mp[text[i]]++;
                o=min(o,mp[text[i]]);
            }
            else if(text[i]=='n')
            {
                mp[text[i]]++;
                n=min(n,mp[text[i]]);
            }

        }
        // cout<<b<<a<<l<<o<<n;
        return min({mp['b'],mp['a'],mp['l']/2,mp['o']/2,mp['n']});
        
    }
};