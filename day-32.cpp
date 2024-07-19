//leetcode - 153(Find Minimum in Rotated Sorted Array)
class Solution {
public:
    int findMin(vector<int>& nums) {
         sort(nums.begin(),nums.end());
         int n=nums[0];
         return n;
    }
};
