class Solution {
public:
    int fun(int ans)
    {
        return __builtin_popcount(ans);
    }
    int totalHammingDistance(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                sum=sum+fun(nums[i]^nums[j]);
            }
        }
         return sum;
    }
};