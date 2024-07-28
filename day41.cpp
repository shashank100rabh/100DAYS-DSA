//leetcode - 136(single number)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result=0;
        for(int i=0;i<nums.size();i++){ 
            result = result^nums[i];//we will apply XOR operation because same number will become zero

        }
        return result;
        
    }
};
