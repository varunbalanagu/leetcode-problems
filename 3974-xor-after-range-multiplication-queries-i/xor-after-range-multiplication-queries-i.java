class Solution {
    public int xorAfterQueries(int[] nums, int[][] queries) {
        int n=nums.length;
        int MOD = 1000000007;
        for(int[] in:queries)
        {
          int i=in[0];
        while(i<=in[1])
        {
              nums[i] = (int)((long)nums[i] * in[3] % MOD); 
            i=i+in[2];
        }
        
        
        }
        int xor=0;
        for(int j=0;j<nums.length;j++)
        {
            xor=xor^nums[j];
        }
        return xor;
    }
}