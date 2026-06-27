class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {

        vector<pair<int,int>> projects;
        priority_queue<int> pq;

        for(int i = 0; i < profits.size(); i++)
        {
            projects.push_back({capital[i], profits[i]});
        }

        sort(projects.begin(), projects.end());

        int n = projects.size();
        int i = 0;

        while(k--)
        {
            for(; i < n; i++)
            {
                if(projects[i].first <= w)
                    pq.push(projects[i].second);
                else
                    break;
            }

            if(pq.empty())
                break;

            w += pq.top();
            pq.pop();
        }

        return w;
    }
};