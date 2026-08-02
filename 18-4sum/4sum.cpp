class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<vector<int>,int>mp;
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i =0 ;i < n ;i++){
            for(int j =i+1;j<n;j++){
                int low =j+1,high =n-1;
                while (low < high){
                    long long sum=(long long)nums[low]+(long long)nums[high]+(long long)nums[i]+(long long)nums[j];
                    if(sum==target){
                        if(mp.find({nums[i],nums[j],nums[low],nums[high]})==mp.end()){
                            ans.push_back({nums[i],nums[j],nums[low],nums[high]});
                            mp[{nums[i],nums[j],nums[low],nums[high]}]++;
                        }
                        low++;
                        high--;

                    }
                    else if (sum<target){
                        low++;
                    }
                    else{
                        high--;
                    }
                }
            }
        }
        return ans;
        
    }
};