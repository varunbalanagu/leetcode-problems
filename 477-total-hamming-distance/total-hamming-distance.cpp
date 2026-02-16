class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
       int n=nums.size();
       vector<int>sol(32);
       for(int i=0;i<n;i++)
       {
        int ans=nums[i];
        vector<int>binary;
        while(ans>0)
        {
            binary.push_back(ans%2);
            ans=ans/2;
        }
        while(binary.size()<32)
        {
            binary.push_back(0);
        }
        reverse(binary.begin(),binary.end());
        int c=0;
        for(int j=0;j<32;j++)
        {
            if(binary[j]==1)
            {
                sol[j]++;
            }
        }
       }
       int res=0;
       for(int i=0;i<32;i++)
       {
        // cout<<sol[i];
         res+=sol[i]*(n-sol[i]);
       }
       return res;

    }
};