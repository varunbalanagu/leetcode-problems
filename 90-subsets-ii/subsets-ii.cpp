class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        int sub=1<<n;
        for(int i=0;i<=sub-1;i++)
        {
            vector<int>ans;
            vector<int>sol;
            int temp=i;
            while(temp>0)
            {
                int r=temp%2;
                ans.push_back(r);
                temp=temp/2;
            }
            while(ans.size()<n)
            {
                ans.push_back(0);

            }
            for(int j=0;j<ans.size();j++)
            {
                if(ans[j]==1)
                {
                    sol.push_back(nums[j]);
                }
            }
            res.push_back(sol);
        }
        map<vector<int>,int>mp;
        vector<vector<int>>finalize;
        for(int i=0;i<res.size();i++)
        {
           if(mp.find(res[i])!=mp.end())
           {
            continue;
           }
           finalize.push_back(res[i]);
           mp[res[i]]++;
        }
        return finalize;
        
    }
};