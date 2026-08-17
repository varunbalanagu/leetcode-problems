class Solution {
public:
    bool good(vector<int>& nums, int mid, int k) {
        int sum =0;
        int temp=0,temp2=0;
        int parts=1;
        int n = nums.size();
        for(int i =0 ;i <nums.size();i++)
        {
           if(nums[i]>mid)
           {
            return false;
           } 
           if(sum+nums[i]<=mid){
           sum+=nums[i];
           }
           else
           {
            parts++;
            sum=nums[i];
           }
        }
        return parts<=k;
         
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size(), sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }
        int low = 0, high = sum;
        int ans = 0;
        int m =INT_MAX;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (good(nums, mid, k)) {
                m=min(m,mid);
                high = mid -1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return m;
    }
};