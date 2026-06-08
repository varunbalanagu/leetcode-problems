class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<pivot)
            {
                ans.push_back(nums[i]);
            }
        }
         for(int j=0;j<n;j++)
        {
            if(nums[j]==pivot)
            {
                ans.push_back(nums[j]);
               
            }
        }
        for(int j=0;j<n;j++)
        {
            if(nums[j]>pivot)
            {
                ans.push_back(nums[j]);
                
            }
        }
        return ans;
        
    }
};