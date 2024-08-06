//leetcode =151 - (reverse words in a string)
class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        stringstream ss(s);
        string word;

        
        while (ss >> word) {
            st.push(word);
        }

        
        string result;
        while (!st.empty()) {
            result += st.top() + " ";
            st.pop();
        }

      
        if (!result.empty()) {
            result.pop_back();
        }

        return result;
    }
};
