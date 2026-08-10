class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int low =0 ,high = n-1;
        int leftMax=0,rightMax=0;
        int water=0;
        while(low<high){
           if(height[low]<height[high]){
            if(height[low]>=leftMax){
                leftMax=height[low];
            }
            else{
              water+=leftMax-height[low];
            }
            low++;
           }
           else{
            if(height[high]>=rightMax){
                rightMax=height[high];
            }
            else{
                water+=rightMax-height[high];
            }
            high--;
           }
        }
        return water;
    }
};