class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        int c=1;
        int m=-1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                continue;
            }
            else if(nums[i+1]==nums[i]+1)
            {
                c++;
            }
            else
            {
                m=max(m,c);
                c=1;
            }
        }
        m=max(m,c);
        return m;
        
    }
};