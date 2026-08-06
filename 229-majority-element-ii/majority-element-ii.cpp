class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> ans;
        vector<int>arr;
       int  n=nums.size();
        int min_value = *std::min_element(nums.begin(), nums.end());
        int max_value = *std::max_element(nums.begin(), nums.end());
        for(int i=0;i<n;i++)
        {
            ans[nums[i]]++;
        }
        for(int i=min_value;i<=max_value;i++)
        {
            if(ans[i]>n/3)
            {
                arr.push_back(i);

            }
        }
        return arr;
        
        
    }
};