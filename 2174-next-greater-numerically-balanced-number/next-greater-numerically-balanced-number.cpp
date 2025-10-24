class Solution {
public:
    int nextBeautifulNumber(int n) {
       
       
        for(int i=n+1;i<=1224444;i++)
        {
             int temp=i;
             int mp[10]={0};
        while(temp>0)
        {
            int r=temp%10;
            mp[r]++;
            temp=temp/10;
        }
        bool flag=true;
        // temp=n;
        for(int j=0;j<10;j++)
        {
            if(mp[j]>0&&mp[j]!=j)
            {
                flag=false;
                break;
            }
        }
        if(flag) return i;
        }
        return -1;
        
    }
};