class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        set<int>s;
        int l=0;
        for(int r=0;r<n;r++)
        {
            
            if(r-l>k)
            {
                s.erase(nums[l]);
                l++;
            }
            if(s.find(nums[r])!=s.end())
            {
                return true;
            }
            s.insert(nums[r]);
        }
        return false;
        
    }
};