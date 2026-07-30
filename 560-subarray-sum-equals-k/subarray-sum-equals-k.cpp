class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n =nums.size();
        vector<int>prefix(n);
        prefix[0]=nums[0];
        map<int,int>mp;
        int sum=0;
        mp[0]++;
        for(int i =1;i<n;i++){
           prefix[i]+=prefix[i-1]+nums[i];
        }
        for(int i =0;i<prefix.size();i++){
            if(mp.find(prefix[i]-k)!=mp.end()){
                sum+=mp[prefix[i]-k];
            }
            mp[prefix[i]]++;
        }
        return sum;
    }
};