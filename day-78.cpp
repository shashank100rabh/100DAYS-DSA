//leetcode -55(jump game)
class Solution {
public:
    bool canJump(vector<int>& nums) {

        int finalpostion = nums.size() - 1;

        //start with second last index
        for(int i = nums.size()-2; i>=0; i--){
            if(i + nums[i] >= finalpostion){
                finalpostion = i;
            }
        }
        return finalpostion == false;
    }
};
