class Solution {
public:
//    long long fact(int k)
//    {
//     long long fact=1;
//     for(int i=1;i<=k;i++)
//     {
//         fact=fact*i;
//     }
//     return fact;
//    }
    bool hasAllCodes(string s, int k) {
        int n=s.size();
        string str;
        map<string,int>mp;
        for(int i=0;i<n;i++)
        {
           str.push_back(s[i]);
           if(str.size()==k)
           {
            mp[str]++;

            str.erase(str.begin());
           }
        }
        long long ans=pow(2,k);
        if(mp.size()>=ans)
        {
           return true;
        }
        return false;
        
    }
};