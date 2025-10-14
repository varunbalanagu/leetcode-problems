class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        bool flag=true;
        bool flag2=true;
        int ans=0;
        int sol=0;
        int c=0;
        for(int i=0;i<n;i++)
        {
            
             
            if(i+2*k>n)
            {
                break;
            }
            ans=nums[i];
            sol=nums[i+k];
             cout<<ans<<sol<<endl;
            flag=true;
            flag2=true;
            cout<<endl;
            for(int j=i+1;j<i+k;j++)
            {
                
               
                cout<<nums[j]<<" ";
                cout<<nums[j+k]<<" ";
               
                if(nums[j]<=ans)
                {
                   
                    flag=false;
                    break;
                }
                if(nums[j+k]<=sol)
                {
                    flag=false;
                    break;
                }
                if(flag==false&&flag2==false)
                {
                    break;
                }
                
                    
                    ans=nums[j];
                    sol=nums[j+k];
                
                
                
            }

            if(flag==true)
            {
                return true;
            }
        }
        return false;        
    }
};