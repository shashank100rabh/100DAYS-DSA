//letcode question number- 242 (valid Anagram)

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map< char , int> mp;
        if(s.size()!= t.size()){
            return false;
        }
        for(int i=0; i<=s.size(); i++){
            mp[s[i]]++;
        }
        for(int i=0; i<=t.size(); i++){
           if( mp[t[i]] > 0){
             mp[t[i]]--;
           }
           else{
             return false;
        }
        }
        
        return true;
        
    }
};
