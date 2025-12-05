class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefix(n);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            prefix[i]=prefix[i-1]+nums[i];
        }
        int k=prefix[n-1];
        int c=0;
        for(int i=0;i<n-1;i++)
        {
            int ans;
            ans=k-prefix[i];
            if((prefix[i]-ans)%2==0)
            {
                c++;
            }
            
        }
        return c;
        
    }
};