class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>prefix(n);
        vector<int>suffix(n);
        
        prefix[0]=nums[0];
        suffix[n-1]=nums[n-1];
        int m =INT_MAX;
        for(int i =1 ; i < n ;i++){
            prefix[i]=max(prefix[i-1],nums[i]);
        }
        for(int i = n-2 ; i >=0 ;i--){
           
            suffix[i]=min(suffix[i+1],nums[i]);
             cout<<suffix[i]<<endl;
        }
        for(int i =0 ; i < n ;i++){
            // cout<<prefix[0]<<suffix[0]<<endl;
            if(abs(prefix[i]-suffix[i])<=k)
            {
                cout<<i<<endl;
                return i;
            }
        }
        return -1;
    }
};