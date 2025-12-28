class Solution {
public:
    int minAllOneMultiple(int k) {
        long long rev=0;
        for(int i=1;i<=k;i++)
        {
           rev=rev*10+1;
            if(rev%k==0)
            {
                return i;
            }
            rev=rev%k;
        }
        return -1;
        
    }
};