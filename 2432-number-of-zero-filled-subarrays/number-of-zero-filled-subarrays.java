class Solution {
    public long zeroFilledSubarray(int[] nums) {
        int n=nums.length;
        long c=0;
        long  ans=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                c++;
            }
            else
            {
                ans=ans+(c*(c+1))/2;
                c=0;
            }

        }
        ans=ans+(c*(c+1))/2;
        return ans;
        
    }
}