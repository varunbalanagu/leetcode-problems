class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long mi=LLONG_MAX,ma=0;
        for(auto i:nums){
            mi=min(static_cast<long long>(i),mi);
            ma=max(static_cast<long long>(i),ma);
        }
        return (ma-mi)*k;
        
        
    }
};