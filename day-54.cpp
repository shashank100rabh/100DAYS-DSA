//leetcode 1343- (Number of sub-arrays of size K and avg. Greater than or equal to thrashold)
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        long long sum = 0; 
        int count = 0;
        long long target = static_cast<long long>(k) * threshold;

      
        for (int i = 0; i < k; i++) {
            sum += arr[i];
        }
        if (sum >= target) {
            count++;
        }

         for (int i = k; i < arr.size(); i++) {
            sum += arr[i] - arr[i - k];
            if (sum >= target) {
                count++;
            }
        }

        return count;
    }
};
