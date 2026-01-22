class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int m=INT_MAX;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int low=i+1;
            int high=n-1;
            while(low<high)
            {
                int sum=nums[i]+nums[low]+nums[high];
                if(abs(sum-target)<=m)
                {
                    m=abs(sum-target);
                    ans=sum;
                }
                if(nums[i]+nums[low]+nums[high]==target)
                {
                   
                    low++;
                    high--;
                }
                else if((nums[i]+nums[low]+nums[high])<target)
                {
                    // m=max(m,(nums[low]+nums[high]+nums[i]));
                    low++;
                }
                else
                {
                    // m=max(m,(nums[i]+nums[low]+nums[high]));
                    high--;
                }

            }
           
        }
        return ans;
        
    }
};