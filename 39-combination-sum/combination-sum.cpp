class Solution {
public:
    void identify(vector<int>&nums,int target,int n , vector<int>res, vector<vector<int>>&ans,int i,int sum){
        if(i==n){
            if(sum==target)
            ans.push_back(res);
            return;

        }
        if(sum==target){
            ans.push_back(res);
            return;
        }
        if(sum<=target){
            res.push_back(nums[i]);
            identify(nums,target,n,res,ans,i,sum+nums[i]);
             res.pop_back();
        }
       
        sum-=nums[i];
        identify(nums,target,n,res,ans,i+1,sum+nums[i]);


    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<int>res;
        vector<vector<int>>ans;
        vector<vector<int>>dp;
        int sum=0,i=0;
        identify(candidates,target,n , res, ans,0,0);
        return ans;
    }
};