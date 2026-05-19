class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        // sort(nums1.begin(),nums1.end());
        // sort(nums2.begin(),nums2.end());
        int mi=max(m,n);
        set<int>s;
        for(int i=0;i<n;i++)
        {
            s.insert(nums1[i]);
        }
        for(int i=0;i<m;i++)
        {
            if(s.find(nums2[i])!=s.end())
            return nums2[i];
        }
        return -1;
        
    }
};