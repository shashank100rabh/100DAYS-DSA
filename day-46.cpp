//leetcode 3 (longest substring without repeating characters)

#include <string>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int count  = 0;

        for (int i = 0; i < n; ++i) {
            unordered_set<char> unique;
            for (int j = i; j < n; ++j) {
                if (unique.find(s[j]) != unique.end()) {
                    
                    break;
                }
                unique.insert(s[j]);
                int currentLength = j - i + 1;
                count= max(count, currentLength);
            }
        }

        return count;
    }
};
