class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        int product=1;
        int temp=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                temp=i;
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            product=product*nums[i];
        }
        int pro2=1;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(i!=temp)
            {
                c++;
            pro2=pro2*nums[i];
            }
        }
        if(c==0) pro2=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            ans.push_back(product/nums[i]);
            else
            {
                ans.push_back(pro2);
            }
        }
        return ans;
    }
};