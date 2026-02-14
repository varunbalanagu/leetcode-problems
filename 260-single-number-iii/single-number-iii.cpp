class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long n=nums.size();
        long long x=0;
        for(int i=0;i<n;i++)
        {
            x=x^nums[i];
        }
        long long xor2=0;
        int b1=0,b2=0;
        xor2=(x&(x-1))^x;
        for(int i=0;i<n;i++)
        {
            if(nums[i]&xor2)
            {
                b1=b1^nums[i];
            }
            else
            {
                b2=b2^nums[i];
            }
        }
        return {b1,b2};
        
    }
};