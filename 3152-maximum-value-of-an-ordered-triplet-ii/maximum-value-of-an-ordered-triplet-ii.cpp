class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();

        vector<long long> suffix(n);
        suffix[n - 1] = nums[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = max(suffix[i + 1], (long long)nums[i]);
        }

        long long ans = 0;
        long long maxLeft = nums[0];

        for (int j = 1; j < n - 1; j++) {
            ans = max(ans,
                     (maxLeft - nums[j]) * suffix[j + 1]);

            maxLeft = max(maxLeft, (long long)nums[j]);
        }

        return ans;
    }
};