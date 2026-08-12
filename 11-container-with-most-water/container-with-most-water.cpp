class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int low =0 ,high =n-1;
        int m =-1;
        // sort(height.begin(),height.end());
        while(low<high){
           if(height[low]<=height[high]){
            m=max(m,(abs(high-low)*height[low]));
            low++;
           }
           else if(height[high]<height[low]){
            m=max(m,(abs(low-high)*height[high]));
            high--;
           }
         
        }
        return m;
    }
};