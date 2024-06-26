//leetcode ques-202 happy number

#include <unordered_set>
#include <cmath>

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> usedIntegers;

        while (true) {
            int sum = 0;
            // Find the sum of squares of digits
            while (n != 0) {
                int digit = n % 10;
                sum += digit * digit;
                n = n / 10;
            }
            if (sum == 1) return true;

            // If the number is already in the set, it means we're in a cycle
            if (usedIntegers.count(sum)) return false;

            // Add the sum to the set
            usedIntegers.insert(sum);

            // Update n to be the sum
            n = sum;
        }
    }
};
