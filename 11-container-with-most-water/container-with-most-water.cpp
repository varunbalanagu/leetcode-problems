class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n = nums.size();
        int low =0 ,high = n-1;
        int m = -1;
        while(low < high){
           if(nums[low]<=nums[high]){
            // int temp =min(nums[low],nums[high]);
            m = max(m , (high - low) * nums[low]);
            low++;
           }
           else
           {
              int temp =min(nums[low],nums[high]);
            m = max(m , (high - low) * temp);
            high--;
           }
            
        }
        return m ;
    }
};