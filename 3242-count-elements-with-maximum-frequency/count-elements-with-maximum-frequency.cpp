class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int c=0;
        vector<int>fre(101,0);
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            fre[nums[i]]++;
        }
        int max=-1;
        for(int j=0;j<n;j++)
        {
            if(fre[nums[j]]>max)
            {
                max=fre[nums[j]];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(fre[nums[i]]==max)
            {
                c++;
            }
        }
        return c;
        
    }
};