class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>sol;
        map<int,int>ans;
        for(int i=0;i<n;i++)
        {
            ans[nums[i]]++;
        }
        int max=-1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>max)
            {
                max=nums[i];
            }
        }
        for(int j=0;j<=max;j++)
        {
            if(ans[j]>1)
            {
                sol.push_back(j);
            }
        }
        return sol;
        
    }
};