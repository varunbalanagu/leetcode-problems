class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int>mp;
         vector<int>sol;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
              if(mp[nums[i]]<=k)
            {
                sol.push_back(nums[i]);
            }
        }
       
        return sol;
        
    }
};