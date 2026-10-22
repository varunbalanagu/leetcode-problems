class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        for(int i =0 ; i < n ; i++){
            int start=intervals[i][0];
            int end=intervals[i][1];
            for(int j =i+1 ; j < n ; j++){
                if(intervals[j][0]<=end){
                    end=max(end,intervals[j][1]);
                }
            }
            ans.push_back({start,end});
            while(i+1<n && intervals[i+1][0]<=end){
                i++;
            }

        }
        return ans;

    }
};