class Solution {
    public int maximizeExpressionOfThree(int[] nums) {
        int n=nums.length;
        Arrays.sort(nums);
        int c=nums[0];
        int a=nums[n-2];
        int b=nums[n-1];
        return a+b-c;

        
    }
}