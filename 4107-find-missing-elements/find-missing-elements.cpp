class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n =nums.size();
        vector<int>ans;
        int m =-1,ma=INT_MAX;
        map<int,int>mp;
        for(int i =0;i<n;i++){
            ma=min(ma,nums[i]);
            m=max(m,nums[i]);
            mp[nums[i]]++;
        }
        for(int i =ma;i<=m;i++){
            if(mp.find(i)==mp.end()){
                ans.push_back(i);
            }
        }
        return ans;

    }
};