class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int pro=1;
        int l=0;
        int count=0;
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                flag=true;
            }
        }
        if(k==0&&!flag) return 0;
        for(int r=0;r<n;r++)
        {
            pro=pro*nums[r];
            while(pro>=k&&l<=r)
            {
                pro=pro/nums[l];
                l++;
            }
            count=count+(r-l+1);
            cout<<count<<" ";
        }
        // cout<<count;
        if(count<=0) return 0;
        return count;
        
    }
};