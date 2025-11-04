class Solution {
public:
    int calculateXSum(unordered_map<int, int>& freqMap, int x) {
   
    vector<pair<int, int>> freqList;
    for (const auto& entry : freqMap) {
        freqList.push_back({entry.first, entry.second});
    }
    

    sort(freqList.begin(), freqList.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.second != b.second) {
            return a.second > b.second;  
        }
        return a.first > b.first;  
    });
   
    int xSum = 0;
    for (int i = 0; i < min(x, (int)freqList.size()); i++) {
        xSum += freqList[i].first*freqList[i].second;
    }
    
    return xSum;
}
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n=nums.size();
        vector<int>ans(n-k+1);
        for(int i=0;i<=n-k;i++)
        {
           unordered_map<int,int>fre;
            for(int j=i;j<i+k;j++)
            {
                fre[nums[j]]++;
            }
            ans[i]=calculateXSum(fre,x);
            
        }
        return ans;
        
        
    }
};