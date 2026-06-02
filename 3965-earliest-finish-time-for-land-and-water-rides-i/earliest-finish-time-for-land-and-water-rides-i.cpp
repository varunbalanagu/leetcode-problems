class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int a=landStartTime.size();
        // int b=landDuration.size();
        int c=waterStartTime.size();
        cout<<c<<endl;
        // int d=waterDuration.size();
        int m=INT_MAX;
        int time=0;
        int time2=0;
        for(int i=0;i<a;i++)
        {
            int finish=landStartTime[i]+landDuration[i];
            for(int j=0;j<c;j++)
            {
                   if(waterStartTime[j]>finish)
                    m=min(m,finish+waterDuration[j]+abs(waterStartTime[j]-finish));
                    else
                    m=min(m,finish+waterDuration[j]);
                    //   cout<<m<<endl;
                
            }
        }
         for(int i=0;i<c;i++)
        {
            int finish=waterStartTime[i]+waterDuration[i];
            // cout<<finish;
            for(int j=0;j<a;j++)
            {

                    if(landStartTime[j]>finish)
                    m=min(m,finish+landDuration[j]+abs(landStartTime[j]-finish));
                    else
                    m=min(m,finish+landDuration[j]);
                    //   cout<<m<<endl;
                  
                
            }
        }

        return m;
    }
};