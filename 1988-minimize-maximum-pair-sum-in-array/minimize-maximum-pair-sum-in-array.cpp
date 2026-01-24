class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int m=-1;
        for(int i=0;i<n;i++)
        {
            int pair=nums[i]+nums[n-i-1];
            m=max(m,pair);
        }
        return m;
        
    }
};