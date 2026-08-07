class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n = nums.size(); 
        set<int>st;
        for(int i =0;i < n;i++){
            st.insert(nums[i]);
        }
        int size=st.size();
        int low =0,sum=0,add=0;
        map<int ,int>mp1;
        map<int ,int>mp2;
        for(int high =0 ;high < n ;high++){
            mp1[nums[high]]++;
            while(mp1.size() > size && low<=high){
               mp1[nums[low]]--;
               if(mp1[nums[low]]==0){
                mp1.erase(nums[low]);
               }
               low++;
            }
            sum+=abs(high-low+1);
        } 
        low=0;
        for(int high =0 ;high < n ;high++){
            mp2[nums[high]]++;
            while(mp2.size() > size-1 && low<=high){
               mp2[nums[low]]--;
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