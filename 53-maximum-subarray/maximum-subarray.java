class Solution {
    public int maxSubArray(int[] nums) {
        int n=nums.length;
        int current=0;
        int m=Integer.MIN_VALUE;
        for(int i=0;i<n;i++)
        {
           current=Math.max(nums[i],current+nums[i]);
           m=Math.max(current,m);
        }
        return m;
        
    }
}