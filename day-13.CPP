//leetcode - 80(Remove Duplicate from Sorted Array II)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         if (nums.size() == 0){
            return 0;
        }
        
        int count =0;

        for (int i=0; i<nums.size(); i++){
            if(i<2 || nums[i]!= nums[count-2]){
                nums[count]=nums[i];
                count++;
            }
        }
        return count;
    }
};
