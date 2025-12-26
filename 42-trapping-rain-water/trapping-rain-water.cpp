class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n <= 2) return 0;
        vector<int> maxi(n, 0);
        maxi[0]=height[0];
        for(int i = 1; i < n - 1; i++) {
            maxi[i] = max(maxi[i - 1], height[i]);
        }
        int right = height[n - 1];
        int res = 0;
        for(int i = n - 2; i >= 1; i--) {
            right = max(right, height[i]);
            res += min(maxi[i], right) - height[i];
        }
        return res;
    }
};