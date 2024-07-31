// leetcode 11(container with most water)
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxm = 0;
        int left = 0;
        int right = height.size() - 1;
        
        while (left < right) {
            int water = (right - left) * min(height[left], height[right]);
            maxm = max(maxm, water);
            
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        
        return maxm;
    }
};
