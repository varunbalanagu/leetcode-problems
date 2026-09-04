class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        int even=0;
        int odd=0;
        for(int i =0 ; i < n ;i++){
            if(nums1[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        return odd==n || even==n || (odd >=1 || even >=1);
    }
};