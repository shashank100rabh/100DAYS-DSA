//leetcode - 34(find the first and last postion of element in sorted array)

#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> rslt(2, -1);
        if (nums.size() < 1) {
            return rslt;
        }
        
        int left = 0, right = nums.size() - 1;
        
        // Find the first occurrence of the target
        while (left < right) {
            int mid = (left + right) / 2;
            if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        
        if (nums[left] != target) {
            return rslt; // Target not found
        } else {
            rslt[0] = left;
        }
        
        // Find the last occurrence of the target
        right = nums.size() - 1; // No need to reset left since it already points to the first occurrence
        while (left < right) {
            int mid = (left + right + 1) / 2;
            if (nums[mid] > target) {
                right = mid - 1;
            } else {
                left = mid;
            }
        }
        
        rslt[1] = right;
        
        return rslt;
    }
};
