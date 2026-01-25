class Solution {
    public int minimumDifference(int[] nums, int k) {
        int n=nums.length;
        int m=Integer.MAX_VALUE;
        Arrays.sort(nums);
        if(n==1)
        return 0;
        for(int i=0;i<n-k+1;i++)
        {
            m=Math.min(m,Math.abs(nums[i]-nums[i+k-1]));
        }
        // for(int i=n-1;i>=k;i--)
        // {
        //     m=Math.min(m,Math.abs(nums[i]-nums[i-1]));
        // }
        return m;
    }
}