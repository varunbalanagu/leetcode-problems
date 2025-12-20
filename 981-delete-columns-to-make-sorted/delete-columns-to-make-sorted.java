class Solution {
    boolean as_sort(String str)
    {
        int n=str.length();
    for(int i=0;i<n-1;i++)
    {
         if((str.charAt(i)-str.charAt(i+1))>0)
         {
            return false;
         }
    }
    return true;
    }
    // boolean ds_sort(String str)
    // {
    //       int n=str.length();
    // for(int i=0;i<n-1;i++)
    // {
    //      if((str.charAt(i)-str.charAt(i+1))<0)
    //      {
    //         return false;
    //      }
    // }
    // return true;
    // }
    public int minDeletionSize(String[] strs) {
        int n=strs.length;
        int count=0;
        for(int i=0;i<strs[0].length();i++)
        {
            String str="";
          for(int j=0;j<n;j++)
          {
            str+=strs[j].charAt(i);
          }
          if(as_sort(str)==false)
          {
            count++;
          }
        }
        return count;
        
    }
}