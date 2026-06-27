class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {

        vector<pair<int,int>> projects;

        for(int i = 0; i < profits.size(); i++)
        {
            projects.push_back({capital[i], profits[i]});
        }

        sort(projects.begin(), projects.end());

        priority_queue<int> pq;

        int n = projects.size();
        int idx = 0;

        while(k--)
        {
            // Push all projects that can be started
            while(idx < n && projects[idx].first <= w)
            {
                pq.push(projects[idx].second);
                idx++;
            }

            if(pq.empty())
                break;

            // Take the maximum profit
            w += pq.top();
            pq.pop();
        }

        return w;
    }
};