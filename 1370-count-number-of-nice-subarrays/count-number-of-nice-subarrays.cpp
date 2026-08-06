class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int low=0;
        int c=0,sum=0;
        for(int high =0;high<n;high++){
            if(nums[high]%2!=0) c++;
            while(c>k&&low<=high){
               if(nums[low]%2!=0){ c--;
            
               }
                  low++;
              
            //    break;
            }
            sum+=abs(high-low+1);

           
           
        }
        int add=0;
         low=0;
        c=0;
        for(int high =0;high < n ;high++){
            if(nums[high]%2!=0) c++;
            while(c > k-1 && low <= high){
                if(nums[low]%2!=0){ c--;
               
            }
             low++;
            }
             add+=abs(high-low+1);
        }
        // cout<<sum<<add<<endl;
        if(sum==n&&add==n) return n;
        return sum-add;

    }
};