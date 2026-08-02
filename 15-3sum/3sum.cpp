class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        map<vector<int> ,int>mp;
        for(int i =0;i<n;i++){
            int low =i+1,high = n-1;
            while(low < high){
                if(nums[low]+nums[i]+nums[high]==0){
                     if(mp.find({nums[i],nums[low],nums[high]})==mp.end()){
                          ans.push_back({nums[i],nums[low],nums[high]});
                          mp[{nums[i],nums[low],nums[high]}]++;
                    }
                    low++;
                    high--;
                }
                else if(nums[low]+nums[i]+nums[high]<0){
                    low++;
                }
                else{
                   high--;
                }
            }
        }
        return ans;
        
    }
};