class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        map<vector<int>,int>mp;
        vector<vector<int>>ans;
        for(int i =0;i<n;i++){
                int low =i+1,high=n-1;
                while(low<high){
                    if(nums[low]+nums[high]+nums[i]==0){
                        if(mp.find({nums[low],nums[high],nums[i]})==mp.end()){
                            ans.push_back({nums[i],nums[low],nums[high]});
                        }
                            mp[{nums[low],nums[high],nums[i]}]++;
                            low++;
                            high--;
                        }
                        else if(nums[low]+nums[high]+nums[i]<0){
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