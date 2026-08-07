class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
       int n =nums.size();
       int low =0;
       map<int ,int>mp1;
       map<int,int>mp2;
       int sum =0 ,add=0;
       for(int high = 0 ;high < n ;high++){
        mp1[nums[high]]++;
        int Size=mp1.size();
        while(mp1.size()>k && low<=high){
            mp1[nums[low]]--;
           
            if(mp1[nums[low]]==0){
                mp1.erase(nums[low]);
            }
             low++;
        }
        sum+=abs(high-low+1);
       }
       low=0;
       for(int high = 0 ;high < n ;high++){
         mp2[nums[high]]++;
         int Size=mp2.size();
         while(mp2.size()>k-1 && low<=high){
             mp2[nums[low]]--;
            // low++;
            if(mp2[nums[low]]==0){
                mp2.erase(nums[low]);
            }
            low++;
        }
        add+=abs(high-low+1);
       }
       return sum-add; 
    }
};