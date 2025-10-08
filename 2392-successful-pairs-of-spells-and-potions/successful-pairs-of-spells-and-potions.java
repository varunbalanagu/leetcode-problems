class Solution {
    public int[] successfulPairs(int[] spells, int[] potions, long success) {
        Arrays.sort(potions);
        int m=potions.length;
        int [] arr=new int[spells.length];
        int k=0;
        for(int i=0;i<spells.length;i++)
        {
            int low=0,high=potions.length-1;
            int c=-1;
            while(low<=high)
            {
                int mid=(low+high)/2;
                if((long)spells[i]*potions[mid]>=success)
                {
                    c=mid;
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
            if(c==-1)
            {
                arr[k]=0;
            }
            else
            {
            arr[k]=m-c;
            }
            k++;
        }
        return arr;
        
    }
}