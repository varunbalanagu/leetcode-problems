class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>ans;
        int c=0;
        int a;
        int n=nums.size();
        int max=-10000000;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>max)
            {
                max=nums[i];
            }
            ans[nums[i]]++;
        }
        for(int j=0;j<n;j++)
        {
            if(ans[nums[j]]>(n/2))
            {
                a=nums[j];
               break;
            }
        }
        return a;
       
        
    }
};