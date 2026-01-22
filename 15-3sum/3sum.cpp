class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        set<vector<int>>ans;
        vector<vector<int>>sol;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
           int low=i+1;
           int high=n-1;
        //    int sum=nums[low]+nums[high];
           while(low<high)
           {
            if(nums[low]+nums[high]+nums[i]==0)
            {
                ans.insert({nums[i],nums[low],nums[high]});
                low++;
                high--;
            }
            else if((nums[low]+nums[high]+nums[i])<0)
            {
                low++;
            }
            else
            {
                high--;
            }
           }

        }
        for(auto&i:ans)
        {
            sol.push_back(i);
        }
        return sol;
        
    }
};