class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums .size();
        vector<int>prefix(n, 0);
        vector<int>suffix(n, 0);
        int sum=0;
        for(int i =0 ; i < n ;i++){
            sum+=nums[i];
        }
        if(sum<x) return -1;
        prefix[0]=nums[0];
        suffix[0]=nums[n-1];
        map<int,int>mp;
        map<int,int>mp2;
        int m =INT_MAX;
        mp[prefix[0]]=1;
        mp2[suffix[0]]=1;
        if(prefix[0]==x) m=min(m ,mp[prefix[0]]);
        if(suffix[0]==x) m=min(m, mp2[suffix[0]]);
        if(prefix[0]+suffix[0]==x) m = min(m ,mp[prefix[0]]+mp2[suffix[0]]);
        for(int i = 1 ; i < n; i++){
            prefix[i]=prefix[i-1]+nums[i];
            mp[prefix[i]]=i+1;
            suffix[i]=suffix[i-1]+nums[n-i-1];
            mp2[suffix[i]]=i+1;
            if(prefix[i]==x) m =min(m,mp[prefix[i]]);
            else if(suffix[i]==x) m=min(m , mp2[suffix[i]]);
             if(mp2.find((x-prefix[i]))!=mp2.end()){
                // cout<<prefix[i]<<endl;
                m=min(m, mp2[x-prefix[i]]+mp[prefix[i]]);
             }
             if(mp.find((x-suffix[i]))!=mp.end()){
                // cout<<suffix[i]<<endl;
                m=min(m,mp[x-suffix[i]]+mp2[suffix[i]]);
             } 
        }
        if(m==INT_MAX) return -1;
        return m;
    }
};