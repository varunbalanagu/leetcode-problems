class Solution {
public:
    int trap(vector<int>& height) {
        int n =height.size();
        int leftmax=0,rightmax=0;
        int water=0;
        int low =0 ,  high = n-1;
        while(low < high){
         if(height[low]<height[high]){
            if(height[low]>=leftmax){
                leftmax=height[low];
                low++;
            }
            else{
                water+=abs(leftmax-height[low]);
                low++;
            }
         }
         else{
            if(height[high]>=rightmax){
                rightmax=height[high];
                high--;
            }
            else{
                water+=abs(rightmax-height[high]);
                high--;
            }
         }

        }
        return water  ;
    }
};