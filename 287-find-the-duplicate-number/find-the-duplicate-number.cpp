class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
         sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++)
        {
            // cout<<nums[i]<<nums[i+1]<<endl;
            if((nums[i]^nums[i+1])==0)
            {
                cout<<nums[i];
                return nums[i];
            }
        }
        return -1;
    }
};