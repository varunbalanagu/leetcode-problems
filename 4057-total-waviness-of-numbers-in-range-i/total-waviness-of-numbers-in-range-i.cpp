class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int n=num1;
        int m=num2;
        int c=0;
        
        for(int i=num1;i<=num2;i++)
        {
            int temp=i;
            vector<int>ans;
            while(temp>0)
            {
                int r=temp%10;
                ans.push_back(r);
                temp=temp/10;
            }
            reverse(ans.begin(),ans.end());
            int peak=0,valley=0;
            // cout<<ans.size()<<endl;
            if(ans.size()<=2)
            {
                continue;
            }
            if(ans.size()==3)
            {
                if(ans[1]>ans[0]&&ans[1]>ans[2])
                {
                    // cout<<ans[1]<<endl;
                    c++;
                }
                else if(ans[1]<ans[0]&&ans[1]<ans[2])
                {
                    //  cout<<ans[1]<<endl;
                    c++;
                }
            }
            else if(ans.size()==4)
            {
                if(ans[1]>ans[0]&&ans[1]>ans[2])
                {
                   c++; 
                }
                if(ans[2]>ans[1]&&ans[2]>ans[3])
                {
                    c++;
                }
                 if(ans[1]<ans[0]&&ans[1]<ans[2])
                {
                   c++; 
                }
                if(ans[2]<ans[1]&&ans[2]<ans[3])
                {
                    c++;
                }

            }
            else
            {
                 if(ans[1]>ans[0]&&ans[1]>ans[2])
                {
                   c++; 
                }
                if(ans[2]>ans[1]&&ans[2]>ans[3])
                {
                    c++;
                }
                 if(ans[1]<ans[0]&&ans[1]<ans[2])
                {
                   c++; 
                }
                if(ans[2]<ans[1]&&ans[2]<ans[3])
                {
                    c++;
                }
                if(ans[3]>ans[2]&&ans[3]>ans[4])
                {
                    c++;
                }
                if(ans[3]<ans[2]&&ans[3]<ans[4])
                {
                    c++;
                }

            }

        }
        return c;
        
    }
};