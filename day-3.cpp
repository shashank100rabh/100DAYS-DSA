//Ransom Note
//using hashmap concept
//leetcode -383

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        int r= ransomNote.length();
        int m= magazine.length();

        unordered_map<char , int > mp;
        for(int i=0; i<m; i++){
            mp[magazine[i]]++;
        }
        for(int i=0; i<r; i++){
            if(mp[ransomNote[i]]>0){
                mp[ransomNote[i]]--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
