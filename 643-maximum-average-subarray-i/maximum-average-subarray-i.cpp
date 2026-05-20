class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int m=INT_MIN;
        int sum=0;
        for(int i=0;i<k;i++)
        {
            sum=sum+nums[i];
        }
        double avg=sum/k;
        m=max(m,sum);
        for(int i=k;i<n;i++)
        {
            sum=sum-nums[i-k];
            sum=sum+nums[i];
            // avg=sum/k;
            m=max(m,sum);
        }
        return (double)m/k;
    }
};