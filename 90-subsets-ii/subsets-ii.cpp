class Solution {
public:
    void identify(vector<int>&ans,vector<vector<int>>&sol,vector<int>&nums,int n,int i)
    {
        if(i==n)
        {
            // sort(ans.begin(),ans.end());
            sol.push_back(ans);
            return ;
        }
        ans.push_back(nums[i]);
        identify(ans,sol,nums,n,i+1);
        ans.pop_back();
        identify(ans,sol,nums,n,i+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>sol;
        vector<int>ans;
        identify(ans,sol,nums,n,0);
        // sort(sol.begin(),sol.end());
        vector<vector<int>>res;
        map<vector<int>,int>mp;
        for(int i=0;i<sol.size();i++)
        {
            if(mp.find(sol[i])!=mp.end())
            {
                continue;
            }
            res.push_back(sol[i]);
            mp[sol[i]]++;
        }

        return res;
    }
};