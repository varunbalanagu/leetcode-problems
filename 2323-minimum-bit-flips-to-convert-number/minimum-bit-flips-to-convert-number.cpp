class Solution {
public:
    int minBitFlips(int start, int goal) {
        int s=start^goal;
        int a,c=0;
        while(s>0)
        {
            a=s%2;
            if(a==1)
            {
                c++;
            }
            s=s/2;

        }
        return c;

        
    }
};