class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(),n2=nums2.size();
        int maxDistance=0;
        int i=0,j=0;
        // for(int i=0;i<n1;i++)
        // {
        //     for(int j=i;j<n2;j++)
        //     {
            while(i < n1 && j < n2){
                if(nums1[i]<=nums2[j]){
                    maxDistance=max(maxDistance,j-i);
                    j++;
                }
                else if(nums2[j]<nums1[i]){
                    i++;
            }
        }
        return maxDistance;
    }
};