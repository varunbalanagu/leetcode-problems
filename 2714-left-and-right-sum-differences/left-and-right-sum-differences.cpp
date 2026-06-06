class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        vector<int>sol;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
        }
        vector<int>ans(n,0);
        ans[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            ans[i]+=ans[i-1]+nums[i];
          
        }
        int leftsum;
         int rightsum;
        for(int i=0;i<n;i++){
            
            if(i==0)
            {
                leftsum=0;
            }
            else
            {
                leftsum=ans[i-1];
            }
            rightsum=sum-ans[i];
            sol.push_back(abs(leftsum-rightsum));
        }
        return sol;
        
        
    }
};