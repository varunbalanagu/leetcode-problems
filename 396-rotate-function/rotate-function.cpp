class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
        }
        int total=0;
        for(int i=0;i<n;i++)
        {
          total=total+(nums[i]*i);
        }
        int m=INT_MIN;
        for(int i=0;i<n;i++)
        {
           total=total-(nums[n-i-1]*(n-1));
           total=total+(sum-nums[n-i-1]);
           m=max(m,total);
        }
        return m;
        
    }
};