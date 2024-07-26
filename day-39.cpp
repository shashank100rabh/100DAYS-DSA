//leetcode 238 product of array except self
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0); 

        //  left 
        int leftProd = 1;
        for (int i = 0; i < n; i++) {
            ans[i] = leftProd;
            leftProd *= nums[i];
        }

        // right and cobine
        int rightProd = 1;
        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= rightProd;
            rightProd *= nums[i];
        }

        return ans;
    }
};
