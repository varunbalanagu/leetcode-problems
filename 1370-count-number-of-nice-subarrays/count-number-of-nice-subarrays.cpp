class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int>mp;
        vector<int>prefix(n,0);
        if(nums[0]%2!=0)
        prefix[0]=1;
        else
        prefix[0]=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]%2!=0)
            prefix[i]=prefix[i-1]+1;
            else
            prefix[i]=prefix[i-1];
        }
         mp[0]++;
        int x,c=0;
        for(int i=0;i<n;i++)
        {
            x=prefix[i];
            if(mp.find(x-k)!=mp.end())
            {
                c+=mp[x-k];
            }
            mp[x]++;

        }
        return c;
        // return c;
        
    }
};