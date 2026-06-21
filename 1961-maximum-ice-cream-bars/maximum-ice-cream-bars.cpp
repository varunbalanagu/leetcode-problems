class Solution {
public:
    int maxIceCream(vector<int>& nums, int coins) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int sum=0,i=0;
        int c=0;
        while(sum<=coins)
        {
            if(nums[i]+sum<=coins)
            {
                sum=sum+nums[i];
                c++;
               
            }
            i++;
            if(i>=n)
            {
                break;
            }
        }
        return c;
        
    }
};