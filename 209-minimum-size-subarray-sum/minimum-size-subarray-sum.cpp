class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low =0;
        int n = nums.size();
        int sum =0;
        int m =INT_MAX;
        for(int high =0 ; high < n ;high++){
            sum+=nums[high];
            while(sum>=target&&low<=high){
                  m=min(m,high-low+1);
                sum-=nums[low];
                low++;
               
            }
        }
        if(m==INT_MAX) return 0;
        return m;
        
    }
};