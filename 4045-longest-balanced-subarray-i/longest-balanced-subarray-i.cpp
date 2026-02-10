class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
          
            int odd=0,even=0;
             map<int,int>mp;
            // map<int,int>mp2;
            for(int j=i;j<n;j++)
            {
             
              mp[nums[j]]++;
             
              if(nums[j]%2==0&&mp[nums[j]]==1)
              {
                //    mp[nums[j]]++;
                   even++;
              }
              else if(nums[j]%2!=0&&mp[nums[j]]==1)
              {
                //  mp2[nums[j]]++;
                odd++;
              }
               if(even==odd)
            {
                
                count=max(count,j-i+1);
            }
            
            }
              
        }
        return  count;
        
    }
};