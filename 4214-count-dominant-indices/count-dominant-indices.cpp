class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n=nums.size();
        int k=0;
        for(int i=0;i<n-1;i++)
        {
            int c=0,sum=0;
            for(int j=i+1;j<n;j++)
            {
                c++;
                sum=sum+nums[j];
                
            }
            if(nums[i]>(sum/c))
            {
                k++;
            }
        }
        return k;
        
    }
};