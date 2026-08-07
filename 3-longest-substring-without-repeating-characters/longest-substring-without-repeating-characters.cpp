class Solution {
public:
    int lengthOfLongestSubstring(string nums) {
        int n = nums.size();
        set<int>st;
        if(nums.size()==0) return 0;
        map<char,int>mp;
        int m =1;
        int low =0;
        for(int high = 0;high<n;high++){
            // cout<<mp[nums[high]]<<endl;
              mp[nums[high]]++;
            while(mp[nums[high]]>1&&low<=high){
                mp[nums[low]]--;
                low++;
                if(mp[nums[low]]==0){
                    mp.erase(nums[low]);
                }
                // cout<<high<<low<<endl;
                 
               
            }
             m=max(m,(high-low+1));
           
          
        }
        return m;
    }
};