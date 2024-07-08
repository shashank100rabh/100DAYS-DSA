//leetcode - 215(kth largest element in an array)
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
         sort(nums.begin(), nums.end(), greater<int>());
        for(int i=0;i<nums.size(); i++){
            return nums[k-1];
        }
           return 0; 
        
        
    }
};
