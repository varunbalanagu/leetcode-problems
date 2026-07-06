class Solution {
public:
    bool good(int mid , vector<int>&nums, int threshold)
    {
        int sum =0;
        for(int i =0 ;i < nums.size() ;i++)
        {
           double c =(double)nums[i]/mid;
        //    cout<<ceil(c)<<endl;
           sum=sum+ceil(c);
        }

        cout<<sum<<" "<<mid<<endl;
        return sum <=threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int mi=-1;
        for(int  i =0 ;i < nums.size(); i++)
        {
            mi=max(mi,nums[i]);
        }
        int low=1,high=mi;
        int ans=0;
        while(low <= high)
        {
          
           int mid=(low + high)/2;
            //  cout<<mid<<endl;
           if(good(mid,nums,threshold))
           {
            // cout<<"hi"<<endl;
            ans = mid;
            high = mid -1;
           }
           else
           {
             low = mid +1;
           }
        }
        return ans;
        
    }
};