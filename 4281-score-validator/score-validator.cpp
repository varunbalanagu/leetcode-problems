class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int n=events.size();
        int score=0;
        int counter=0;
        for(int i=0;i<n;i++)
        {
            if(counter>=10)
            {
                break;
            }
            else if(events[i]=="W")
            {
                counter++;
                // score=score+1;
            }
            else if(events[i]=="WD")
            {
                score=score+1;
            }
            else if(events[i]=="NB")
            {
                score=score+1;
            }
            else
            {
                score=score+stoi(events[i]);
            }
        }
        return {score,counter};
        
    }
};