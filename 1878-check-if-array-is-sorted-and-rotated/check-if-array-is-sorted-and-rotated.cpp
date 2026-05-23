class Solution {
public:
   bool sorted(vector<int>&nums)
   {
    int n=nums.size();
    for(int i=1;i<n;i++)
    {
        if(nums[i-1]>nums[i])
        return false;
    }
    return true;
   }
    bool check(vector<int>& nums) {
        int n=nums.size();
        // vector<int>ans;
        // for(int i=0;i<n;i++)
        // {
        //     ans.push_back(nums[i]);
        // }
        for(int i=0;i<nums.size();i++)
        {
            nums.push_back(nums[0]);
           
            // cout<<endl;
            nums.erase(nums.begin());
            //  for(int j=0;j<nums.size();j++)
            // {
            //     cout<<nums[j]<<" ";
            // }
            if(sorted(nums))
            return true;
        }
        return false;
        
    }
};