class Solution {
    public List<Integer> findMissingElements(int[] nums) {
        int n=nums.length;
        int [] fre=new int[101];
        Arrays.fill(fre,0);
        int m=10000;
        int mi=-1;
        for(int i=0;i<n;i++)
        {
             m=Math.min(nums[i],m);
             mi=Math.max(nums[i],mi);
            fre[nums[i]]++;
        }
        List<Integer>lis=new ArrayList<>();
        for(int i=m;i<=mi;i++)
        {
            if(fre[i]==0)
            {
                lis.add(i);
            }
        }
        return lis;
        
    }
}