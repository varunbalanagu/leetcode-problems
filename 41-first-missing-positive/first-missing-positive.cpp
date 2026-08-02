class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        int min=1;
        for(int i =0 ;i < n ;i++){
            if(min<=0){
                continue;
            }
            else if(min==nums[i]){
                min++;
            }
            else if(nums[i] > min){
                break;
            }
        }
        return min;
    }
};