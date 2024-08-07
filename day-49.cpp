//leetcode =28 - (Find the index of the first occurrence in a string)
class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0; 
        
        int n = haystack.size();
        int m = needle.size();
        
        if (m > n) return -1; 
        
        for (int i = 0; i <= n - m; i++) {
            if (haystack.substr(i, m) == needle) {
                return i; 
            }
        }
        
        return -1;
    }
};
