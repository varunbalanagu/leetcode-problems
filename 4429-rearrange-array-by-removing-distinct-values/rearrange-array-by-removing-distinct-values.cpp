class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        map<int, int> mp;

        while (!nums.empty()) {
            vector<int> sol;
            mp.clear();

            for (int i = 0; i < nums.size(); ) {

                int x = nums[i];

                if (mp[x] == 0) {
                    sol.push_back(x);
                    mp[x]++;

                    nums.erase(nums.begin() + i);
                }
                else {
                    i++;
                }
            }

            sort(sol.begin(), sol.end());

            for (int j = 0; j < sol.size(); j++) {
                ans.push_back(sol[j]);
            }
        }

        return ans;
    }
};