class Solution {
    boolean ispalindrome(int n)
    {
        int temp=n;
        List<Integer>lis=new ArrayList<>();
        List<Integer>lis2=new ArrayList<>();
            while(n>0)
            {
                int r=n%2;
                lis.add(r);
                n=n/2;
            }
        
        
            while(temp>0)
                {
                    int r=temp%2;
                    lis2.add(r);
                    temp=temp/2;
                }
      
            
            Collections.reverse(lis2);
           
            for(int i=0;i<lis2.size();i++)
                {
                    if(lis.get(i)!=lis2.get(i))
                    {
                        return false;
                    }
                    // System.out.println(lis.size()+lis2.size());
                }
        return true;
    }
    public int[] minOperations(int[] nums) {
        int n=nums.length;
        int [] arr=new int[n];
        int k=0;
        for(int i=0;i<n;i++)
            {
               if(ispalindrome(nums[i]))
               {
                   arr[k]=0;
                   k++;
                   
               }
                else
               {
                   int c=0;
               for(int j=1;j<=5000;j++)
                   {
                       c++;
                      if(ispalindrome(nums[i]+j)||ispalindrome(nums[i]-j))
                      {
                          arr[k]=c;
                          k++;
                          break;
                      }
                       
                   }
               }
                
            }
        return arr;
        
    }
}