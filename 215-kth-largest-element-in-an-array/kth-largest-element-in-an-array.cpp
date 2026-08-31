class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<int>pq;
        for(int i =0;i<n;i++){
            pq.push(nums[i]);
        }
        int count=0;
        while(!pq.empty()){
            count++;
            if(count==k) return pq.top();
            pq.pop();
            
        }
        return -1;
    }
};