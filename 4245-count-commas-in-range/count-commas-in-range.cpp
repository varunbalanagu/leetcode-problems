class Solution {
public:
    int countCommas(int n) {
        int sum=0;
        for(int i =1 ; i <= n ;i++){
            int temp=i;
            int c=0;
            while(temp>0){
                int r=temp%10;
                c++;
                temp=temp/10;
            }
            if(c<=3) continue;
            else{
                sum++;
            }
        }
        return sum;
    }
    
};