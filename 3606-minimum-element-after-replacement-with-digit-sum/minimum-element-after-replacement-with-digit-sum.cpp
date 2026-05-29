class Solution {
public:
    int minElement(vector<int>& nums) {
        int n=nums.size();
        int r,sum=0;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            sum=0;
            while(nums[i]>0)
            {
                r=nums[i]%10;
                sum=sum+r;
                nums[i]=nums[i]/10;
            }
            ans.push_back(sum);
            
        }
        int min=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(ans[i]<min)
            {
                min=ans[i];
            }
        }
        return min;
        
    }
};