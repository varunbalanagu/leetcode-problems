class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        deque<int>dq;
        for(int i =0;i<n;i++){
            dq.push_back(nums[i]);
        }
        int i =0;
        while(i <k){
         int n =dq.size();
         int temp=dq[dq.size()-1];
         dq.pop_back();
         dq.push_front(temp);
         i++;
        }
        nums.clear();
        for(int i =0;i<dq.size();i++){
            nums.push_back(dq[i]);
        }
        // nums=dq; 
    }
};