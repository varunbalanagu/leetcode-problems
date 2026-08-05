class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int n = nums.size();
       int j =0 ,i=0;
       int c=0;
       while(i<n && j < n){
        if(nums[i]!=nums[j]){
            c++;
            swap(nums[j+1],nums[i]);
            j++;
        }
       i++;
       }
       return c+1; 
    }
};