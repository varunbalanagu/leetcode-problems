class Solution {
public:
      void identify(vector<vector<int>>&ans,vector<int>&res,vector<int>&nums,int i ,int n,vector<vector<int>>&dp){
          if(i==n){
            if(find(dp.begin(),dp.end(),res)!=dp.end()){
                return;
            }
            // sort(res.begin(),res.end());
            ans.push_back(res);
            dp.push_back(res);
            // res.clear();
            return;
          }
          res.push_back(nums[i]);
          identify(ans,res,nums,i+1,n,dp);
          res.pop_back();
          identify(ans,res,nums,i+1,n,dp);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         int n =nums.size();
        vector<vector<int>>ans;
        vector<int>res;
        sort(nums.begin(),nums.end());
        vector<vector<int>>dp;
        identify(ans,res,nums,0,n,dp);
        // sort(ans.begin(),ans.end());
        return ans;
    }
};