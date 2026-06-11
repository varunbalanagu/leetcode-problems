class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int low=0,high=n-1;
        int m=-1;
        if(n<2)
        return height[0];
        if(n==2)
        return min(height[0],height[1]);
        while(low<=high)
        {
            if(height[low]<=height[high])
            {
                m=max(m,(height[low]*(high-low)));
                low++;
            }
            else if(height[low]>=height[high])
            {
                 m=max(m,(height[high]*(high-low)));
                high--;
            }
            else
            {
                low++;
                high--;
            }
        }
        return m;
        
    }
};