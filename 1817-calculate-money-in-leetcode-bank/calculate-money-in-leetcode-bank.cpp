class Solution {
public:
    int totalMoney(int n) {
        // int k=1;
        long sum=0;
        long c=0;
        int temp=1;
        int k=temp;
        while(n>=1)
        {
            sum=sum+k;
            k++;
            c++;
            if(c%7==0)
            {
                temp++;
                k=0;
                k+=temp;
            }
            n--;

        }
        return sum;
        
    }
};