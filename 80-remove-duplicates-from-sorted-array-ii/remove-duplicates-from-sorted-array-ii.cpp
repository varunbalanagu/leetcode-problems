class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int n=nums.size();
       map<int,int>mp;
       int j=n-1;
       int c=0;
       int slow=0;
       for(int i=0;i<n;i++)
       {
        mp[nums[i]]++;
        if(mp[nums[i]]<=2)
        {
            c++;
           nums[slow]=nums[i];
           slow++;
        }
       } 
       for(int i=0;i<n;i++)
       {
        cout<<nums[i]<<" ";
       }
       return c;
    }
};