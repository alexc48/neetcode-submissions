class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;

        int l = 0;
        int r = height.size()-1;
        int highersL = 0;

        while (l < r) {
            int width = r-l;

            int lower = min(height[l], height[r]);

            maxWater = max(lower*width, maxWater);
            
            if (height[l] < height[r]) {
                l++;
            } else {
                r--;
            }
        }
       return maxWater;
    }
};