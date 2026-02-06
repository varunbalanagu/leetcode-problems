class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long n=nums.size();
        long long low=0;
        long long m=INT_MAX;
        for(int high=0;high<n;high++)
        {
          while(low<n&&nums[low]<=static_cast<long long>(k)*static_cast<long long>(nums[high]))
          {
            m=min(m,n-(low-high+1));
            low++;
          }
        }
        return m;
        
        
    }
};