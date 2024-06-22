// leetcode que. no.-- 88 (merge sorted-array)

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        stack<int> stk;

        // Push elements of nums1 and nums2 into the stack
        for (int i = m - 1; i >= 0; i--) {
            stk.push(nums1[i]);
        }

        for (int i = n - 1; i >= 0; i--) {
            stk.push(nums2[i]);
        }

        // Pop elements from stack and store them back into nums1
        for (int i = m + n - 1; i >= 0; i--) {
            nums1[i] = stk.top();
            stk.pop();
        }

        
        sort(nums1.begin(), nums1.end());
    }
};
