//leetcode -14(longest common prefix)
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        int p=0;
        for(auto i : strs[0]){
            for(auto j : strs){
                if( j[p]!= i){
                    return s;
                }
            }
            s=s+i;
            ++p;
        }
        return s;
    }
};
