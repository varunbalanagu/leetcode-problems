class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(nums.size()==2) return max(nums[0],nums[1]);
        else if(nums.size()==1) return nums[0];
        vector<int> dp(n + 1, 0);
        int m = -1;
        dp[0] = nums[0];
        dp[1] = max(nums[0],nums[1]);
        m = max(m, dp[1]);
        for (int i = 2; i < n; i++) {
            dp[i] = max(dp[i-1], dp[i - 2] + nums[i]);
            m = max(m, dp[i]);
        }
        return m;
    }
};