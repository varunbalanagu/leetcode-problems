class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int c=0;
            int odd=0,even=0;
            if(nums[i]%2!=0)
            odd=1;
            else
            even=1;
            for(int j=i+1;j<n;j++)
            {
                if(odd)
                {
                    if(nums[j]%2==0)
                    {
                        c++;
                    }
                }
                else
                {
                    if(nums[j]%2!=0)
                    {
                        c++;
                    }
                }
            }
            ans.push_back(c);
        }
        return ans;
        
    }
};