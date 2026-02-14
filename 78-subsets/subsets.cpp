class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        int subsets=1<<n;
        for(int i=0;i<=subsets-1;i++)
        {
            int temp=i;
            vector<int>res;
            vector<int>sol;
            while(temp>0)
            {
                int r=temp%2;
                cout<<r<<" ";
                res.push_back(r);
                temp=temp/2;
            }
            cout<<endl;
            reverse(res.begin(),res.end());
            while(res.size()<n)
            {
                res.insert(res.begin(),0);
            }
            
            for(int j=0;j<res.size();j++)
            {
                if(res[j]==1)
                {
                  sol.push_back(nums[j]);
                }
            }
            ans.push_back(sol);
        }
        return ans;
        
    }
};