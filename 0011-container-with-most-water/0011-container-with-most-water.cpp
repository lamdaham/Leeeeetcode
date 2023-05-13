class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxOut = 0;
        int i = 0;
        int j = height.size()-1;
        while (i < j) {
            maxOut = max(maxOut, min(height[i], height[j]) * (j-i));
            if(height[i] > height[j]) {
                j--;
            } else {
                i++;
            }
        }
        return maxOut;
        
    }
};