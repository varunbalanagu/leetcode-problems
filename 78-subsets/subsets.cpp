class Solution {
public:
    void identify(vector<vector<int>>&sol,vector<int>&ans,vector<int>&nums,int n,int i)
    {
         if(i==n)
         {
            sol.push_back(ans);
            return;
         }
         ans.push_back(nums[i]);
         identify(sol,ans,nums,n,i+1);
         ans.pop_back();
         identify(sol,ans,nums,n,i+1);
         
         
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>sol;
        vector<int>ans;
        identify(sol,ans,nums,n,0);
        return sol;
        
    }
};