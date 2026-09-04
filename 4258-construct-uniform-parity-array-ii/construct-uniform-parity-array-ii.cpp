class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
         int even=0,odd=0;
         map<int,int>mp;
         int mi=INT_MAX;
         for(int i =0 ; i < n ; i++){
            if(nums1[i]%2==0){
                even++;
                mp[nums1[i]]++;
            }
            else{
                odd++;
                    mp[nums1[i]]++;
                    mi=min(mi,nums1[i]);
            }
         }
         for(int i =0;i<n ;i++){
            if(nums1[i]%2==0&& mi!=INT_MAX && nums1[i]<mi){
                return false;
            }
         }
         return (odd==n || even == n ||(odd>=1||even>=1));
    }
};