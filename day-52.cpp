//leetcode =2461 - (maximum sum of distinct subarray with length k)
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        
        if (n < k) return 0;
        long long maxsum = 0;
        long long sum = 0;
        unordered_map<int, int> count_map; // To track the count of elements in the window

        int i = 0;
        
        for (int j = 0; j < n; j++) {
            sum += nums[j];
            count_map[nums[j]]++;

           
            if (j - i + 1 > k) {
                sum -= nums[i];
                count_map[nums[i]]--;
                if (count_map[nums[i]] == 0) {
                    count_map.erase(nums[i]);
                }
                i++;
            }

           
            if (j - i + 1 == k && count_map.size() == k) {
                maxsum = max(maxsum, sum);
            }
        }
        
        return maxsum;
    }
};
