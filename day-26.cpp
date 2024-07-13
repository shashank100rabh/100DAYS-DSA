//leetcode - 8(string to integer
class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1; // 1 for positive, -1 for negative
        long long num = 0; // using long long to handle potential overflow

        // Skip leading whitespace
        while (i < s.length() && s[i] == ' ') {
            i++;
        }

        // Handle sign
        if (i < s.length() && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i++] == '-') ? -1 : 1;
        }

        // Parse digits
        while (i < s.length() && isdigit(s[i])) {
            num = num * 10 + (s[i++] - '0');
            // Check for overflow
            if (num * sign > INT_MAX) {
                return INT_MAX;
            } else if (num * sign < INT_MIN) {
                return INT_MIN;
            }
        }

        return num * sign;
        
    }
};
