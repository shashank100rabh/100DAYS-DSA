//leetcode =209 - (minimum size subarray sum)
class Solution {
public:
    int minSubArrayLen(int s, std::vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = 0;
        int sum = 0;
        int min_length = INT_MAX;
        
        while (right < n) {
            sum += nums[right++];
            
            while (sum >= s) {
                min_length = std::min(min_length, right - left);
                sum -= nums[left++];
            }
        }
        
        
        if (min_length == INT_MAX) {
            return 0;
        } else {
            return min_length;
        }
    }
};
