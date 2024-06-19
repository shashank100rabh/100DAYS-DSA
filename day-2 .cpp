//leetcode q-9-- palindrome number
class Solution {
public:
    bool isPalindrome(int x) {
        double  rev=0,orig=0;
        orig=x;
        //rev= reverse number; orig= orignal number
        while(x>0){
            rev=(rev*10)+ (x%10);
            x=x/10;
        }
        if(orig!=rev){
            return 0;
        }
        else{return 1;}
    }
};
