class Solution {
    public int minimumDistance(int[] nums) {
        int n=nums.length;
        int m=10000;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if(nums[i]==nums[j]&&nums[j]==nums[k]&&nums[k]==nums[i])
                    {
                        int dis=Math.abs(i-j)+Math.abs(i-k)+Math.abs(j-k);
                        m=Math.min(dis,m);
                    }
                }
            }
        }
        if(m==10000)
        return -1;
        else return m;
        
    }
}