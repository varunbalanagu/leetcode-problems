class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        map<int,int>mp;
        map<int,int>mp2;
        int m =-1;
        int mi=INT_MAX;
        vector<pair<int,int>>vec;
        for(int i =0;i<n;i++){
            mp[nums[i]]++;
            // vec.push_back({mp[nums[i]],nums[i]});
            m=max(m,nums[i]);
            mi=min(mi,nums[i]);
        }
        for(int i =mi;i<=m;i++){
            if(mp[i]!=0)
           vec.push_back({mp[i],i});
        }
        vector<int>ans;
        sort(vec.begin(),vec.end());
        // if(k==1) return {vec[vec.size()-1].second};
        cout<<vec.size()<<endl;
        int j =0;
        for(int i =vec.size()-1;i>=0;i--){
            ans.push_back(vec[i].second);
            j++;
            if(j==k) break;
        }
        return ans;



    }
};