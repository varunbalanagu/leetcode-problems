class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int m =-1,c=1;
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        for(int i =0;i<n-1;i++){
            if(nums[i]==nums[i+1]) continue;
            else if(nums[i+1]==nums[i]+1){
               c++;
            }
            else{
                m=max(m,c);
                c=1;
            }
        }
        cout<<c<<endl;
        m=max(m,c);
        return m;
        
    }
};