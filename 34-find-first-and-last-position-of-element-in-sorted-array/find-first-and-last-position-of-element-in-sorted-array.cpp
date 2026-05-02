class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,high=n-1;
        bool flag=false;
        bool flag2=false;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
            {
                flag=true;

                high=mid-1;
            }
            else if(nums[mid]<target)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        int a=high+1;
        if(flag==false) a=-1;
        
         low=0,high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
            {
                flag2=true;
               low=mid+1;
            }
             else if(nums[mid]<target)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
         int b=low-1;
        if(flag2==false) b=-1;
       
        return {a,b};
        
        
    }
};