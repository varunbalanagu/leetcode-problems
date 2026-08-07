class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        int low =0;
        int m =0;
        int sum=0;
        unordered_map<int,int>mp;
        for(int high =0 ;high < n ;high++){
          mp[nums[high]]++;
          sum+=nums[high];
          while(mp[nums[high]]>1 && low<=high){
              mp[nums[low]]--;
              sum-=nums[low];
              low++;
            
          }
          m=max(m,sum);
        }
        return m;
    }
};