//leetcode quesno. = 2582 (Pass the Pillow)

class Solution {
public:
    int passThePillow(int n, int time) {
        int pillowpos = 1;
        int currenttime=0;
        bool revdirection = false;

        while (currenttime < time){
            if(!revdirection){
                pillowpos++;
            }
            else{
                pillowpos--;
            }
            if(pillowpos==1 || pillowpos==n){
                revdirection=!revdirection;
            }
            currenttime++;
        }
        return pillowpos;
        
    }
};
