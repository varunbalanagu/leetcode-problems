class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int maxi=1;
        sort(nums.begin(),nums.end());
        for(int i =0;i<n;i++){
              if(nums[i]<maxi){
                continue;
              }
              else if(nums[i]==maxi){
                maxi++;
              }
              else{
                break;
              }
        }
        return maxi;
        
    }
};