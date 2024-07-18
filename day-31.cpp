//leetcode - 6(Zigzag conversion)
class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;  // If only one row, return the string as is

        vector<string> arr(min(numRows, int(s.size())));
        bool down = false; // Variable to track direction of filling
        int row = 0;

        for (int i = 0; i < s.size(); i++) {
            arr[row].push_back(s[i]);
            if (row == numRows - 1) {
                down = false;  // Change direction to up
            }
            if (row == 0) {
                down = true;   // Change direction to down
            }
          if (down) {
  row += 1;
} else {
  row -= 1;
}
        }

        string res;
        for (int i = 0; i < arr.size(); i++) {
            res += arr[i];
        }
        return res;
    }
};
